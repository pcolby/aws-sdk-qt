// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CODEGURUREVIEWERCLIENT_P_H
#define QTAWS_CODEGURUREVIEWERCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace CodeGuruReviewer {

class CodeGuruReviewerClient;

class CodeGuruReviewerClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit CodeGuruReviewerClientPrivate(CodeGuruReviewerClient * const q);

private:
    Q_DECLARE_PUBLIC(CodeGuruReviewerClient)
    Q_DISABLE_COPY(CodeGuruReviewerClientPrivate)

};

} // namespace CodeGuruReviewer
} // namespace QtAws

#endif

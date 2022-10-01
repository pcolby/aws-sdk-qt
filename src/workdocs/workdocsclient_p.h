// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_WORKDOCSCLIENT_P_H
#define QTAWS_WORKDOCSCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace WorkDocs {

class WorkDocsClient;

class WorkDocsClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit WorkDocsClientPrivate(WorkDocsClient * const q);

private:
    Q_DECLARE_PUBLIC(WorkDocsClient)
    Q_DISABLE_COPY(WorkDocsClientPrivate)

};

} // namespace WorkDocs
} // namespace QtAws

#endif

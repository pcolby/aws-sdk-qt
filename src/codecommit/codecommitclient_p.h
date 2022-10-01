// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CODECOMMITCLIENT_P_H
#define QTAWS_CODECOMMITCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace CodeCommit {

class CodeCommitClient;

class CodeCommitClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit CodeCommitClientPrivate(CodeCommitClient * const q);

private:
    Q_DECLARE_PUBLIC(CodeCommitClient)
    Q_DISABLE_COPY(CodeCommitClientPrivate)

};

} // namespace CodeCommit
} // namespace QtAws

#endif

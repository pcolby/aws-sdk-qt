// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CODEDEPLOYCLIENT_P_H
#define QTAWS_CODEDEPLOYCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace CodeDeploy {

class CodeDeployClient;

class CodeDeployClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit CodeDeployClientPrivate(CodeDeployClient * const q);

private:
    Q_DECLARE_PUBLIC(CodeDeployClient)
    Q_DISABLE_COPY(CodeDeployClientPrivate)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CODEDEPLOYREQUEST_P_H
#define QTAWS_CODEDEPLOYREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "codedeployrequest.h"

namespace QtAws {
namespace CodeDeploy {

class CodeDeployRequest;

class CodeDeployRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    CodeDeployRequest::Action action; ///< CodeDeploy action to be performed.
    QString apiVersion;        ///< CodeDeploy API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< CodeDeploy request (query string) parameters. @todo?

    CodeDeployRequestPrivate(const CodeDeployRequest::Action action, CodeDeployRequest * const q);
    CodeDeployRequestPrivate(const CodeDeployRequestPrivate &other, CodeDeployRequest * const q);

    static QString toString(const CodeDeployRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(CodeDeployRequest)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif

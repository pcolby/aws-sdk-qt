// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLOUDFORMATIONREQUEST_P_H
#define QTAWS_CLOUDFORMATIONREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "cloudformationrequest.h"

namespace QtAws {
namespace CloudFormation {

class CloudFormationRequest;

class CloudFormationRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    CloudFormationRequest::Action action; ///< CloudFormation action to be performed.
    QString apiVersion;        ///< CloudFormation API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< CloudFormation request (query string) parameters. @todo?

    CloudFormationRequestPrivate(const CloudFormationRequest::Action action, CloudFormationRequest * const q);
    CloudFormationRequestPrivate(const CloudFormationRequestPrivate &other, CloudFormationRequest * const q);

    static QString toString(const CloudFormationRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(CloudFormationRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif

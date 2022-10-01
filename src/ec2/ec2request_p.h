// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EC2REQUEST_P_H
#define QTAWS_EC2REQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class Ec2Request;

class Ec2RequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    Ec2Request::Action action; ///< Ec2 action to be performed.
    QString apiVersion;        ///< Ec2 API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Ec2 request (query string) parameters. @todo?

    Ec2RequestPrivate(const Ec2Request::Action action, Ec2Request * const q);
    Ec2RequestPrivate(const Ec2RequestPrivate &other, Ec2Request * const q);

    static QString toString(const Ec2Request::Action &action);

private:
    Q_DECLARE_PUBLIC(Ec2Request)

};

} // namespace Ec2
} // namespace QtAws

#endif

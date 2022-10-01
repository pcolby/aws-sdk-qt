// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GREENGRASSV2REQUEST_P_H
#define QTAWS_GREENGRASSV2REQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "greengrassv2request.h"

namespace QtAws {
namespace GreengrassV2 {

class GreengrassV2Request;

class GreengrassV2RequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    GreengrassV2Request::Action action; ///< GreengrassV2 action to be performed.
    QString apiVersion;        ///< GreengrassV2 API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< GreengrassV2 request (query string) parameters. @todo?

    GreengrassV2RequestPrivate(const GreengrassV2Request::Action action, GreengrassV2Request * const q);
    GreengrassV2RequestPrivate(const GreengrassV2RequestPrivate &other, GreengrassV2Request * const q);

    static QString toString(const GreengrassV2Request::Action &action);

private:
    Q_DECLARE_PUBLIC(GreengrassV2Request)

};

} // namespace GreengrassV2
} // namespace QtAws

#endif

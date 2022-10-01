// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLOUDHSMV2REQUEST_P_H
#define QTAWS_CLOUDHSMV2REQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "cloudhsmv2request.h"

namespace QtAws {
namespace CloudHsmV2 {

class CloudHsmV2Request;

class CloudHsmV2RequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    CloudHsmV2Request::Action action; ///< CloudHsmV2 action to be performed.
    QString apiVersion;        ///< CloudHsmV2 API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< CloudHsmV2 request (query string) parameters. @todo?

    CloudHsmV2RequestPrivate(const CloudHsmV2Request::Action action, CloudHsmV2Request * const q);
    CloudHsmV2RequestPrivate(const CloudHsmV2RequestPrivate &other, CloudHsmV2Request * const q);

    static QString toString(const CloudHsmV2Request::Action &action);

private:
    Q_DECLARE_PUBLIC(CloudHsmV2Request)

};

} // namespace CloudHsmV2
} // namespace QtAws

#endif

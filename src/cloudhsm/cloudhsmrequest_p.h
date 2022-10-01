// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLOUDHSMREQUEST_P_H
#define QTAWS_CLOUDHSMREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "cloudhsmrequest.h"

namespace QtAws {
namespace CloudHsm {

class CloudHsmRequest;

class CloudHsmRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    CloudHsmRequest::Action action; ///< CloudHsm action to be performed.
    QString apiVersion;        ///< CloudHsm API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< CloudHsm request (query string) parameters. @todo?

    CloudHsmRequestPrivate(const CloudHsmRequest::Action action, CloudHsmRequest * const q);
    CloudHsmRequestPrivate(const CloudHsmRequestPrivate &other, CloudHsmRequest * const q);

    static QString toString(const CloudHsmRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(CloudHsmRequest)

};

} // namespace CloudHsm
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IOTSITEWISEREQUEST_P_H
#define QTAWS_IOTSITEWISEREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "iotsitewiserequest.h"

namespace QtAws {
namespace IoTSiteWise {

class IoTSiteWiseRequest;

class IoTSiteWiseRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    IoTSiteWiseRequest::Action action; ///< IoTSiteWise action to be performed.
    QString apiVersion;        ///< IoTSiteWise API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< IoTSiteWise request (query string) parameters. @todo?

    IoTSiteWiseRequestPrivate(const IoTSiteWiseRequest::Action action, IoTSiteWiseRequest * const q);
    IoTSiteWiseRequestPrivate(const IoTSiteWiseRequestPrivate &other, IoTSiteWiseRequest * const q);

    static QString toString(const IoTSiteWiseRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(IoTSiteWiseRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif

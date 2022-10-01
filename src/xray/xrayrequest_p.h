// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_XRAYREQUEST_P_H
#define QTAWS_XRAYREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "xrayrequest.h"

namespace QtAws {
namespace XRay {

class XRayRequest;

class XRayRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    XRayRequest::Action action; ///< XRay action to be performed.
    QString apiVersion;        ///< XRay API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< XRay request (query string) parameters. @todo?

    XRayRequestPrivate(const XRayRequest::Action action, XRayRequest * const q);
    XRayRequestPrivate(const XRayRequestPrivate &other, XRayRequest * const q);

    static QString toString(const XRayRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(XRayRequest)

};

} // namespace XRay
} // namespace QtAws

#endif

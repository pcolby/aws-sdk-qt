// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETECTIVEREQUEST_P_H
#define QTAWS_DETECTIVEREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "detectiverequest.h"

namespace QtAws {
namespace Detective {

class DetectiveRequest;

class DetectiveRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    DetectiveRequest::Action action; ///< Detective action to be performed.
    QString apiVersion;        ///< Detective API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Detective request (query string) parameters. @todo?

    DetectiveRequestPrivate(const DetectiveRequest::Action action, DetectiveRequest * const q);
    DetectiveRequestPrivate(const DetectiveRequestPrivate &other, DetectiveRequest * const q);

    static QString toString(const DetectiveRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(DetectiveRequest)

};

} // namespace Detective
} // namespace QtAws

#endif

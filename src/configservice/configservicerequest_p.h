// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONFIGSERVICEREQUEST_P_H
#define QTAWS_CONFIGSERVICEREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "configservicerequest.h"

namespace QtAws {
namespace ConfigService {

class ConfigServiceRequest;

class ConfigServiceRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    ConfigServiceRequest::Action action; ///< ConfigService action to be performed.
    QString apiVersion;        ///< ConfigService API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< ConfigService request (query string) parameters. @todo?

    ConfigServiceRequestPrivate(const ConfigServiceRequest::Action action, ConfigServiceRequest * const q);
    ConfigServiceRequestPrivate(const ConfigServiceRequestPrivate &other, ConfigServiceRequest * const q);

    static QString toString(const ConfigServiceRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(ConfigServiceRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif

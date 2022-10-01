// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LIGHTSAILREQUEST_P_H
#define QTAWS_LIGHTSAILREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class LightsailRequest;

class LightsailRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    LightsailRequest::Action action; ///< Lightsail action to be performed.
    QString apiVersion;        ///< Lightsail API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Lightsail request (query string) parameters. @todo?

    LightsailRequestPrivate(const LightsailRequest::Action action, LightsailRequest * const q);
    LightsailRequestPrivate(const LightsailRequestPrivate &other, LightsailRequest * const q);

    static QString toString(const LightsailRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(LightsailRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif

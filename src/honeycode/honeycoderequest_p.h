// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_HONEYCODEREQUEST_P_H
#define QTAWS_HONEYCODEREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "honeycoderequest.h"

namespace QtAws {
namespace Honeycode {

class HoneycodeRequest;

class HoneycodeRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    HoneycodeRequest::Action action; ///< Honeycode action to be performed.
    QString apiVersion;        ///< Honeycode API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Honeycode request (query string) parameters. @todo?

    HoneycodeRequestPrivate(const HoneycodeRequest::Action action, HoneycodeRequest * const q);
    HoneycodeRequestPrivate(const HoneycodeRequestPrivate &other, HoneycodeRequest * const q);

    static QString toString(const HoneycodeRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(HoneycodeRequest)

};

} // namespace Honeycode
} // namespace QtAws

#endif

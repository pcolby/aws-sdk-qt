// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EVIDENTLYREQUEST_P_H
#define QTAWS_EVIDENTLYREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "evidentlyrequest.h"

namespace QtAws {
namespace Evidently {

class EvidentlyRequest;

class EvidentlyRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    EvidentlyRequest::Action action; ///< Evidently action to be performed.
    QString apiVersion;        ///< Evidently API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Evidently request (query string) parameters. @todo?

    EvidentlyRequestPrivate(const EvidentlyRequest::Action action, EvidentlyRequest * const q);
    EvidentlyRequestPrivate(const EvidentlyRequestPrivate &other, EvidentlyRequest * const q);

    static QString toString(const EvidentlyRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(EvidentlyRequest)

};

} // namespace Evidently
} // namespace QtAws

#endif

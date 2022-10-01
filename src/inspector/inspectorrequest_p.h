// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INSPECTORREQUEST_P_H
#define QTAWS_INSPECTORREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "inspectorrequest.h"

namespace QtAws {
namespace Inspector {

class InspectorRequest;

class InspectorRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    InspectorRequest::Action action; ///< Inspector action to be performed.
    QString apiVersion;        ///< Inspector API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Inspector request (query string) parameters. @todo?

    InspectorRequestPrivate(const InspectorRequest::Action action, InspectorRequest * const q);
    InspectorRequestPrivate(const InspectorRequestPrivate &other, InspectorRequest * const q);

    static QString toString(const InspectorRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(InspectorRequest)

};

} // namespace Inspector
} // namespace QtAws

#endif

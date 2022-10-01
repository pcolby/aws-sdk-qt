// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EMRREQUEST_P_H
#define QTAWS_EMRREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "emrrequest.h"

namespace QtAws {
namespace Emr {

class EmrRequest;

class EmrRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    EmrRequest::Action action; ///< Emr action to be performed.
    QString apiVersion;        ///< Emr API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Emr request (query string) parameters. @todo?

    EmrRequestPrivate(const EmrRequest::Action action, EmrRequest * const q);
    EmrRequestPrivate(const EmrRequestPrivate &other, EmrRequest * const q);

    static QString toString(const EmrRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(EmrRequest)

};

} // namespace Emr
} // namespace QtAws

#endif

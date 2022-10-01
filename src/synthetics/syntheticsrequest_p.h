// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SYNTHETICSREQUEST_P_H
#define QTAWS_SYNTHETICSREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "syntheticsrequest.h"

namespace QtAws {
namespace Synthetics {

class SyntheticsRequest;

class SyntheticsRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    SyntheticsRequest::Action action; ///< Synthetics action to be performed.
    QString apiVersion;        ///< Synthetics API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Synthetics request (query string) parameters. @todo?

    SyntheticsRequestPrivate(const SyntheticsRequest::Action action, SyntheticsRequest * const q);
    SyntheticsRequestPrivate(const SyntheticsRequestPrivate &other, SyntheticsRequest * const q);

    static QString toString(const SyntheticsRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(SyntheticsRequest)

};

} // namespace Synthetics
} // namespace QtAws

#endif

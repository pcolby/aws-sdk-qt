// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STSREQUEST_P_H
#define QTAWS_STSREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "stsrequest.h"

namespace QtAws {
namespace Sts {

class StsRequest;

class StsRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    StsRequest::Action action; ///< Sts action to be performed.
    QString apiVersion;        ///< Sts API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Sts request (query string) parameters. @todo?

    StsRequestPrivate(const StsRequest::Action action, StsRequest * const q);
    StsRequestPrivate(const StsRequestPrivate &other, StsRequest * const q);

    static QString toString(const StsRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(StsRequest)

};

} // namespace Sts
} // namespace QtAws

#endif

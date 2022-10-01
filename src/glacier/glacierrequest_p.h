// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GLACIERREQUEST_P_H
#define QTAWS_GLACIERREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "glacierrequest.h"

namespace QtAws {
namespace Glacier {

class GlacierRequest;

class GlacierRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    GlacierRequest::Action action; ///< Glacier action to be performed.
    QString apiVersion;        ///< Glacier API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Glacier request (query string) parameters. @todo?

    GlacierRequestPrivate(const GlacierRequest::Action action, GlacierRequest * const q);
    GlacierRequestPrivate(const GlacierRequestPrivate &other, GlacierRequest * const q);

    static QString toString(const GlacierRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(GlacierRequest)

};

} // namespace Glacier
} // namespace QtAws

#endif

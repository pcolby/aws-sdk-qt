// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_OUTPOSTSREQUEST_P_H
#define QTAWS_OUTPOSTSREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "outpostsrequest.h"

namespace QtAws {
namespace Outposts {

class OutpostsRequest;

class OutpostsRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    OutpostsRequest::Action action; ///< Outposts action to be performed.
    QString apiVersion;        ///< Outposts API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Outposts request (query string) parameters. @todo?

    OutpostsRequestPrivate(const OutpostsRequest::Action action, OutpostsRequest * const q);
    OutpostsRequestPrivate(const OutpostsRequestPrivate &other, OutpostsRequest * const q);

    static QString toString(const OutpostsRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(OutpostsRequest)

};

} // namespace Outposts
} // namespace QtAws

#endif

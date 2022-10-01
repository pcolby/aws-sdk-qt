// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SWFREQUEST_P_H
#define QTAWS_SWFREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "swfrequest.h"

namespace QtAws {
namespace Swf {

class SwfRequest;

class SwfRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    SwfRequest::Action action; ///< Swf action to be performed.
    QString apiVersion;        ///< Swf API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Swf request (query string) parameters. @todo?

    SwfRequestPrivate(const SwfRequest::Action action, SwfRequest * const q);
    SwfRequestPrivate(const SwfRequestPrivate &other, SwfRequest * const q);

    static QString toString(const SwfRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(SwfRequest)

};

} // namespace Swf
} // namespace QtAws

#endif

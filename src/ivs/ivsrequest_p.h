// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IVSREQUEST_P_H
#define QTAWS_IVSREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "ivsrequest.h"

namespace QtAws {
namespace Ivs {

class IvsRequest;

class IvsRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    IvsRequest::Action action; ///< Ivs action to be performed.
    QString apiVersion;        ///< Ivs API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Ivs request (query string) parameters. @todo?

    IvsRequestPrivate(const IvsRequest::Action action, IvsRequest * const q);
    IvsRequestPrivate(const IvsRequestPrivate &other, IvsRequest * const q);

    static QString toString(const IvsRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(IvsRequest)

};

} // namespace Ivs
} // namespace QtAws

#endif

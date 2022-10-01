// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MACIEREQUEST_P_H
#define QTAWS_MACIEREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "macierequest.h"

namespace QtAws {
namespace Macie {

class MacieRequest;

class MacieRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    MacieRequest::Action action; ///< Macie action to be performed.
    QString apiVersion;        ///< Macie API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Macie request (query string) parameters. @todo?

    MacieRequestPrivate(const MacieRequest::Action action, MacieRequest * const q);
    MacieRequestPrivate(const MacieRequestPrivate &other, MacieRequest * const q);

    static QString toString(const MacieRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(MacieRequest)

};

} // namespace Macie
} // namespace QtAws

#endif

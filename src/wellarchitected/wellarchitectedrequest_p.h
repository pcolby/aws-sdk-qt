// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_WELLARCHITECTEDREQUEST_P_H
#define QTAWS_WELLARCHITECTEDREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "wellarchitectedrequest.h"

namespace QtAws {
namespace WellArchitected {

class WellArchitectedRequest;

class WellArchitectedRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    WellArchitectedRequest::Action action; ///< WellArchitected action to be performed.
    QString apiVersion;        ///< WellArchitected API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< WellArchitected request (query string) parameters. @todo?

    WellArchitectedRequestPrivate(const WellArchitectedRequest::Action action, WellArchitectedRequest * const q);
    WellArchitectedRequestPrivate(const WellArchitectedRequestPrivate &other, WellArchitectedRequest * const q);

    static QString toString(const WellArchitectedRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(WellArchitectedRequest)

};

} // namespace WellArchitected
} // namespace QtAws

#endif

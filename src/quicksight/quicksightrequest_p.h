// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_QUICKSIGHTREQUEST_P_H
#define QTAWS_QUICKSIGHTREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class QuickSightRequest;

class QuickSightRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    QuickSightRequest::Action action; ///< QuickSight action to be performed.
    QString apiVersion;        ///< QuickSight API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< QuickSight request (query string) parameters. @todo?

    QuickSightRequestPrivate(const QuickSightRequest::Action action, QuickSightRequest * const q);
    QuickSightRequestPrivate(const QuickSightRequestPrivate &other, QuickSightRequest * const q);

    static QString toString(const QuickSightRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(QuickSightRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif

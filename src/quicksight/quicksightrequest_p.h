/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_QUICKSIGHTREQUEST_P_H
#define QTAWS_QUICKSIGHTREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class QuickSightRequest;

class QTAWS_EXPORT QuickSightRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

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

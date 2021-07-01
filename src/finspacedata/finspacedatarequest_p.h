/*
    Copyright 2013-2021 Paul Colby

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

#ifndef QTAWS_FINSPACEDATAREQUEST_P_H
#define QTAWS_FINSPACEDATAREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "finspacedatarequest.h"

namespace QtAws {
namespace FinSpaceData {

class FinSpaceDataRequest;

class FinSpaceDataRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    FinSpaceDataRequest::Action action; ///< FinSpaceData action to be performed.
    QString apiVersion;        ///< FinSpaceData API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< FinSpaceData request (query string) parameters. @todo?

    FinSpaceDataRequestPrivate(const FinSpaceDataRequest::Action action, FinSpaceDataRequest * const q);
    FinSpaceDataRequestPrivate(const FinSpaceDataRequestPrivate &other, FinSpaceDataRequest * const q);

    static QString toString(const FinSpaceDataRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(FinSpaceDataRequest)

};

} // namespace FinSpaceData
} // namespace QtAws

#endif

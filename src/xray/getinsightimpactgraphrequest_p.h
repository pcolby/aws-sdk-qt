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

#ifndef QTAWS_GETINSIGHTIMPACTGRAPHREQUEST_P_H
#define QTAWS_GETINSIGHTIMPACTGRAPHREQUEST_P_H

#include "xrayrequest_p.h"
#include "getinsightimpactgraphrequest.h"

namespace QtAws {
namespace XRay {

class GetInsightImpactGraphRequest;

class QTAWS_EXPORT GetInsightImpactGraphRequestPrivate : public XRayRequestPrivate {

public:
    GetInsightImpactGraphRequestPrivate(const XRayRequest::Action action,
                                   GetInsightImpactGraphRequest * const q);
    GetInsightImpactGraphRequestPrivate(const GetInsightImpactGraphRequestPrivate &other,
                                   GetInsightImpactGraphRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetInsightImpactGraphRequest)

};

} // namespace XRay
} // namespace QtAws

#endif

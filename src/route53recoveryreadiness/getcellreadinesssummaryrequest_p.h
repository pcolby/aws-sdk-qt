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

#ifndef QTAWS_GETCELLREADINESSSUMMARYREQUEST_P_H
#define QTAWS_GETCELLREADINESSSUMMARYREQUEST_P_H

#include "route53recoveryreadinessrequest_p.h"
#include "getcellreadinesssummaryrequest.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class GetCellReadinessSummaryRequest;

class GetCellReadinessSummaryRequestPrivate : public Route53RecoveryReadinessRequestPrivate {

public:
    GetCellReadinessSummaryRequestPrivate(const Route53RecoveryReadinessRequest::Action action,
                                   GetCellReadinessSummaryRequest * const q);
    GetCellReadinessSummaryRequestPrivate(const GetCellReadinessSummaryRequestPrivate &other,
                                   GetCellReadinessSummaryRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetCellReadinessSummaryRequest)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif

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

#ifndef QTAWS_DESCRIBESAVINGSPLANRATESREQUEST_P_H
#define QTAWS_DESCRIBESAVINGSPLANRATESREQUEST_P_H

#include "savingsplansrequest_p.h"
#include "describesavingsplanratesrequest.h"

namespace QtAws {
namespace SavingsPlans {

class DescribeSavingsPlanRatesRequest;

class QTAWS_EXPORT DescribeSavingsPlanRatesRequestPrivate : public SavingsPlansRequestPrivate {

public:
    DescribeSavingsPlanRatesRequestPrivate(const SavingsPlansRequest::Action action,
                                   DescribeSavingsPlanRatesRequest * const q);
    DescribeSavingsPlanRatesRequestPrivate(const DescribeSavingsPlanRatesRequestPrivate &other,
                                   DescribeSavingsPlanRatesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeSavingsPlanRatesRequest)

};

} // namespace SavingsPlans
} // namespace QtAws

#endif

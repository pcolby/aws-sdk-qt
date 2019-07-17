/*
    Copyright 2013-2019 Paul Colby

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

#ifndef QTAWS_LISTRECEIPTFILTERSREQUEST_P_H
#define QTAWS_LISTRECEIPTFILTERSREQUEST_P_H

#include "sesrequest_p.h"
#include "listreceiptfiltersrequest.h"

namespace QtAws {
namespace SES {

class ListReceiptFiltersRequest;

class QTAWS_EXPORT ListReceiptFiltersRequestPrivate : public SesRequestPrivate {

public:
    ListReceiptFiltersRequestPrivate(const SesRequest::Action action,
                                   ListReceiptFiltersRequest * const q);
    ListReceiptFiltersRequestPrivate(const ListReceiptFiltersRequestPrivate &other,
                                   ListReceiptFiltersRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListReceiptFiltersRequest)

};

} // namespace SES
} // namespace QtAws

#endif

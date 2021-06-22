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

#ifndef QTAWS_LISTGRANTSREQUEST_P_H
#define QTAWS_LISTGRANTSREQUEST_P_H

#include "kmsrequest_p.h"
#include "listgrantsrequest.h"

namespace QtAws {
namespace KMS {

class ListGrantsRequest;

class ListGrantsRequestPrivate : public KmsRequestPrivate {

public:
    ListGrantsRequestPrivate(const KmsRequest::Action action,
                                   ListGrantsRequest * const q);
    ListGrantsRequestPrivate(const ListGrantsRequestPrivate &other,
                                   ListGrantsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListGrantsRequest)

};

} // namespace KMS
} // namespace QtAws

#endif

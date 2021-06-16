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

#ifndef QTAWS_LISTTOKENSREQUEST_P_H
#define QTAWS_LISTTOKENSREQUEST_P_H

#include "licensemanagerrequest_p.h"
#include "listtokensrequest.h"

namespace QtAws {
namespace LicenseManager {

class ListTokensRequest;

class QTAWS_EXPORT ListTokensRequestPrivate : public LicenseManagerRequestPrivate {

public:
    ListTokensRequestPrivate(const LicenseManagerRequest::Action action,
                                   ListTokensRequest * const q);
    ListTokensRequestPrivate(const ListTokensRequestPrivate &other,
                                   ListTokensRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListTokensRequest)

};

} // namespace LicenseManager
} // namespace QtAws

#endif

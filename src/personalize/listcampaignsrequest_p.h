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

#ifndef QTAWS_LISTCAMPAIGNSREQUEST_P_H
#define QTAWS_LISTCAMPAIGNSREQUEST_P_H

#include "personalizerequest_p.h"
#include "listcampaignsrequest.h"

namespace QtAws {
namespace Personalize {

class ListCampaignsRequest;

class QTAWS_EXPORT ListCampaignsRequestPrivate : public PersonalizeRequestPrivate {

public:
    ListCampaignsRequestPrivate(const PersonalizeRequest::Action action,
                                   ListCampaignsRequest * const q);
    ListCampaignsRequestPrivate(const ListCampaignsRequestPrivate &other,
                                   ListCampaignsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListCampaignsRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif

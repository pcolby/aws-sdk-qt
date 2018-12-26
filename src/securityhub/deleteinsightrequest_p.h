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

#ifndef QTAWS_DELETEINSIGHTREQUEST_P_H
#define QTAWS_DELETEINSIGHTREQUEST_P_H

#include "securityhubrequest_p.h"
#include "deleteinsightrequest.h"

namespace QtAws {
namespace SecurityHub {

class DeleteInsightRequest;

class QTAWS_EXPORT DeleteInsightRequestPrivate : public SecurityHubRequestPrivate {

public:
    DeleteInsightRequestPrivate(const SecurityHubRequest::Action action,
                                   DeleteInsightRequest * const q);
    DeleteInsightRequestPrivate(const DeleteInsightRequestPrivate &other,
                                   DeleteInsightRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteInsightRequest)

};

} // namespace SecurityHub
} // namespace QtAws

#endif

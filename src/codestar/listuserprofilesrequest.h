/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_LISTUSERPROFILESREQUEST_H
#define QTAWS_LISTUSERPROFILESREQUEST_H

#include "codestarrequest.h"

namespace AWS {

namespace CodeStar {

class ListUserProfilesRequestPrivate;

class QTAWS_EXPORT ListUserProfilesRequest : public CodeStarRequest {

public:
    ListUserProfilesRequest(const ListUserProfilesRequest &other);
    ListUserProfilesRequest();

    virtual bool isValid() const;


protected:
    virtual AwsAbstractResponse * response(QNetworkReply * const reply) const;

private:
    Q_DECLARE_PRIVATE(ListUserProfilesRequest)

}

} // namespace CodeStar
} // namespace AWS

#endif

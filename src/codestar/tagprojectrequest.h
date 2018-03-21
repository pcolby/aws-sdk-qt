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

#ifndef QTAWS_TAGPROJECTREQUEST_H
#define QTAWS_TAGPROJECTREQUEST_H

#include "codestarrequest.h"

namespace AWS {

namespace CodeStar {

class TagProjectRequestPrivate;

class QTAWS_EXPORT TagProjectRequest : public CodeStarRequest {

public:
    TagProjectRequest(const TagProjectRequest &other);
    TagProjectRequest();

    virtual bool isValid() const;


protected:
    virtual AwsAbstractResponse * response(QNetworkReply * const reply) const;

private:
    Q_DECLARE_PRIVATE(TagProjectRequest)

}

} // namespace CodeStar
} // namespace AWS

#endif

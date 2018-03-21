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

#ifndef QTAWS_ASSOCIATEDELEGATETORESOURCEREQUEST_H
#define QTAWS_ASSOCIATEDELEGATETORESOURCEREQUEST_H

#include "workmailrequest.h"

namespace AWS {

namespace WorkMail {

class AssociateDelegateToResourceRequestPrivate;

class QTAWS_EXPORT AssociateDelegateToResourceRequest : public WorkMailRequest {

public:
    AssociateDelegateToResourceRequest(const AssociateDelegateToResourceRequest &other);
    AssociateDelegateToResourceRequest();

    virtual bool isValid() const;


protected:
    virtual AwsAbstractResponse * response(QNetworkReply * const reply) const;

private:
    Q_DECLARE_PRIVATE(AssociateDelegateToResourceRequest)

}

} // namespace WorkMail
} // namespace AWS

#endif

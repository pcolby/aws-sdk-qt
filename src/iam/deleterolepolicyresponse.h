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

#ifndef QTAWS_DELETEROLEPOLICYRESPONSE_H
#define QTAWS_DELETEROLEPOLICYRESPONSE_H

#include "iamresponse.h"
#include "deleterolepolicyrequest.h"

namespace AWS {

namespace iam {

class DeleteRolePolicyResponsePrivate;

class QTAWS_EXPORT DeleteRolePolicyResponse : public DeleteRolePolicyResponse {
    Q_OBJECT

public:
    DeleteRolePolicyResponse(const DeleteRolePolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteRolePolicyRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(DeleteRolePolicyResponse)
    Q_DISABLE_COPY(DeleteRolePolicyResponse)

};

} // namespace iam
} // namespace AWS

#endif

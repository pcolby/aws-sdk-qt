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

#ifndef QTAWS_ATTACHGROUPPOLICYRESPONSE_H
#define QTAWS_ATTACHGROUPPOLICYRESPONSE_H

#include "iamresponse.h"
#include "attachgrouppolicyrequest.h"

namespace AWS {

namespace IAM {

class AttachGroupPolicyResponsePrivate;

class QTAWS_EXPORT AttachGroupPolicyResponse : public AttachGroupPolicyResponse {
    Q_OBJECT

public:
    AttachGroupPolicyResponse(const AttachGroupPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AttachGroupPolicyRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(AttachGroupPolicyResponse)
    Q_DISABLE_COPY(AttachGroupPolicyResponse)

};

} // namespace IAM
} // namespace AWS

#endif

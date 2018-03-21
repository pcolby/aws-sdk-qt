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

#ifndef QTAWS_LISTTARGETSFORPOLICYRESPONSE_H
#define QTAWS_LISTTARGETSFORPOLICYRESPONSE_H

#include "iotresponse.h"
#include "listtargetsforpolicyrequest.h"

namespace AWS {

namespace iot {

class ListTargetsForPolicyResponsePrivate;

class QTAWS_EXPORT ListTargetsForPolicyResponse : public ListTargetsForPolicyResponse {
    Q_OBJECT

public:
    ListTargetsForPolicyResponse(const ListTargetsForPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListTargetsForPolicyRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(ListTargetsForPolicyResponse)
    Q_DISABLE_COPY(ListTargetsForPolicyResponse)

};

} // namespace iot
} // namespace AWS

#endif

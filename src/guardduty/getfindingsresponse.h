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

#ifndef QTAWS_GETFINDINGSRESPONSE_H
#define QTAWS_GETFINDINGSRESPONSE_H

#include "guarddutyresponse.h"
#include "getfindingsrequest.h"

namespace AWS {

namespace GuardDuty {

class GetFindingsResponsePrivate;

class QTAWS_EXPORT GetFindingsResponse : public GetFindingsResponse {
    Q_OBJECT

public:
    GetFindingsResponse(const GetFindingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetFindingsRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(GetFindingsResponse)
    Q_DISABLE_COPY(GetFindingsResponse)

};

} // namespace GuardDuty
} // namespace AWS

#endif

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

#ifndef QTAWS_LOOKUPEVENTSRESPONSE_H
#define QTAWS_LOOKUPEVENTSRESPONSE_H

#include "cloudtrailresponse.h"
#include "lookupeventsrequest.h"

namespace AWS {

namespace CloudTrail {

class LookupEventsResponsePrivate;

class QTAWS_EXPORT LookupEventsResponse : public LookupEventsResponse {
    Q_OBJECT

public:
    LookupEventsResponse(const LookupEventsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const LookupEventsRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(LookupEventsResponse)
    Q_DISABLE_COPY(LookupEventsResponse)

};

} // namespace CloudTrail
} // namespace AWS

#endif

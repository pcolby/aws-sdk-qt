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
    along with QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef SQSCHANGEMESSAGEVISIBILITY_H
#define SQSCHANGEMESSAGEVISIBILITY_H

#include "sqschangemessagevisibilityrequest.h"
#include "sqsresponse.h"

namespace QtAws {
namespace SqsOld {

class SqsChangeMessageVisibilityResponsePrivate;

class QTAWS_EXPORT SqsChangeMessageVisibilityResponse : public SqsResponse {
    Q_OBJECT

public:
    SqsChangeMessageVisibilityResponse(const SqsChangeMessageVisibilityRequest &request,
                             QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SqsChangeMessageVisibilityRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(SqsChangeMessageVisibilityResponse)
    Q_DISABLE_COPY(SqsChangeMessageVisibilityResponse)
    friend class TestSqsChangeMessageVisibilityResponse;
};

} // namespace SqsOld
} // namespace QtAws

#endif

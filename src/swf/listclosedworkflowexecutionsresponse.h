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

#ifndef QTAWS_LISTCLOSEDWORKFLOWEXECUTIONSRESPONSE_H
#define QTAWS_LISTCLOSEDWORKFLOWEXECUTIONSRESPONSE_H

#include "swfresponse.h"
#include "listclosedworkflowexecutionsrequest.h"

namespace AWS {

namespace SWF {

class ListClosedWorkflowExecutionsResponsePrivate;

class QTAWS_EXPORT ListClosedWorkflowExecutionsResponse : public SWFResponse {
    Q_OBJECT

public:
    ListClosedWorkflowExecutionsResponse(const ListClosedWorkflowExecutionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListClosedWorkflowExecutionsRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(ListClosedWorkflowExecutionsResponse)
    Q_DISABLE_COPY(ListClosedWorkflowExecutionsResponse)

};

} // namespace SWF
} // namespace AWS

#endif

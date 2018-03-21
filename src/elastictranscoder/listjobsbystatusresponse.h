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

#ifndef QTAWS_LISTJOBSBYSTATUSRESPONSE_H
#define QTAWS_LISTJOBSBYSTATUSRESPONSE_H

#include "elastictranscoderresponse.h"
#include "listjobsbystatusrequest.h"

namespace AWS {

namespace elastictranscoder {

class ListJobsByStatusResponsePrivate;

class QTAWS_EXPORT ListJobsByStatusResponse : public ListJobsByStatusResponse {
    Q_OBJECT

public:
    ListJobsByStatusResponse(const ListJobsByStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListJobsByStatusRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(ListJobsByStatusResponse)
    Q_DISABLE_COPY(ListJobsByStatusResponse)

};

} // namespace elastictranscoder
} // namespace AWS

#endif

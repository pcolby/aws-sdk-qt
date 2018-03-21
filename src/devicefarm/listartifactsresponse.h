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

#ifndef QTAWS_LISTARTIFACTSRESPONSE_H
#define QTAWS_LISTARTIFACTSRESPONSE_H

#include "devicefarmresponse.h"
#include "listartifactsrequest.h"

namespace AWS {

namespace devicefarm {

class ListArtifactsResponsePrivate;

class QTAWS_EXPORT ListArtifactsResponse : public ListArtifactsResponse {
    Q_OBJECT

public:
    ListArtifactsResponse(const ListArtifactsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListArtifactsRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(ListArtifactsResponse)
    Q_DISABLE_COPY(ListArtifactsResponse)

};

} // namespace devicefarm
} // namespace AWS

#endif

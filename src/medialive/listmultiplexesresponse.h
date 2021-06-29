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
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_LISTMULTIPLEXESRESPONSE_H
#define QTAWS_LISTMULTIPLEXESRESPONSE_H

#include "medialiveresponse.h"
#include "listmultiplexesrequest.h"

namespace QtAws {
namespace MediaLive {

class ListMultiplexesResponsePrivate;

class QTAWSMEDIALIVE_EXPORT ListMultiplexesResponse : public MediaLiveResponse {
    Q_OBJECT

public:
    ListMultiplexesResponse(const ListMultiplexesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListMultiplexesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListMultiplexesResponse)
    Q_DISABLE_COPY(ListMultiplexesResponse)

};

} // namespace MediaLive
} // namespace QtAws

#endif

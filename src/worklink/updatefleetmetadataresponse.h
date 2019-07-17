/*
    Copyright 2013-2019 Paul Colby

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

#ifndef QTAWS_UPDATEFLEETMETADATARESPONSE_H
#define QTAWS_UPDATEFLEETMETADATARESPONSE_H

#include "worklinkresponse.h"
#include "updatefleetmetadatarequest.h"

namespace QtAws {
namespace WorkLink {

class UpdateFleetMetadataResponsePrivate;

class QTAWS_EXPORT UpdateFleetMetadataResponse : public WorkLinkResponse {
    Q_OBJECT

public:
    UpdateFleetMetadataResponse(const UpdateFleetMetadataRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateFleetMetadataRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFleetMetadataResponse)
    Q_DISABLE_COPY(UpdateFleetMetadataResponse)

};

} // namespace WorkLink
} // namespace QtAws

#endif

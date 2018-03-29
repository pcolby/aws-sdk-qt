/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_GETTELEMETRYMETADATARESPONSE_H
#define QTAWS_GETTELEMETRYMETADATARESPONSE_H

#include "inspectorresponse.h"
#include "gettelemetrymetadatarequest.h"

namespace AWS {

namespace Inspector {

class GetTelemetryMetadataResponsePrivate;

class QTAWS_EXPORT GetTelemetryMetadataResponse : public InspectorResponse {
    Q_OBJECT

public:
    GetTelemetryMetadataResponse(const GetTelemetryMetadataRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetTelemetryMetadataRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(GetTelemetryMetadataResponse)
    Q_DISABLE_COPY(GetTelemetryMetadataResponse)

};

} // namespace Inspector
} // namespace AWS

#endif

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

#ifndef QTAWS_DELETEV2LOGGINGLEVELRESPONSE_H
#define QTAWS_DELETEV2LOGGINGLEVELRESPONSE_H

#include "iotresponse.h"
#include "deletev2logginglevelrequest.h"

namespace QtAws {
namespace IoT {

class DeleteV2LoggingLevelResponsePrivate;

class QTAWS_EXPORT DeleteV2LoggingLevelResponse : public IoTResponse {
    Q_OBJECT

public:
    DeleteV2LoggingLevelResponse(const DeleteV2LoggingLevelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteV2LoggingLevelRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(DeleteV2LoggingLevelResponse)
    Q_DISABLE_COPY(DeleteV2LoggingLevelResponse)

};

} // namespace IoT
} // namespace QtAws

#endif

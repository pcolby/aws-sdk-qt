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

#ifndef QTAWS_DELETETHINGTYPERESPONSE_H
#define QTAWS_DELETETHINGTYPERESPONSE_H

#include "iotresponse.h"
#include "deletethingtyperequest.h"

namespace QtAws {
namespace IoT {

class DeleteThingTypeResponsePrivate;

class QTAWS_EXPORT DeleteThingTypeResponse : public IoTResponse {
    Q_OBJECT

public:
    DeleteThingTypeResponse(const DeleteThingTypeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteThingTypeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteThingTypeResponse)
    Q_DISABLE_COPY(DeleteThingTypeResponse)

};

} // namespace IoT
} // namespace QtAws

#endif

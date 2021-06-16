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

#ifndef QTAWS_DELETEDATASTORERESPONSE_H
#define QTAWS_DELETEDATASTORERESPONSE_H

#include "iotanalyticsresponse.h"
#include "deletedatastorerequest.h"

namespace QtAws {
namespace IoTAnalytics {

class DeleteDatastoreResponsePrivate;

class QTAWS_EXPORT DeleteDatastoreResponse : public IoTAnalyticsResponse {
    Q_OBJECT

public:
    DeleteDatastoreResponse(const DeleteDatastoreRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteDatastoreRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDatastoreResponse)
    Q_DISABLE_COPY(DeleteDatastoreResponse)

};

} // namespace IoTAnalytics
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDATASTORERESPONSE_H
#define QTAWS_DELETEDATASTORERESPONSE_H

#include "iotanalyticsresponse.h"
#include "deletedatastorerequest.h"

namespace QtAws {
namespace IoTAnalytics {

class DeleteDatastoreResponsePrivate;

class QTAWSIOTANALYTICS_EXPORT DeleteDatastoreResponse : public IoTAnalyticsResponse {
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

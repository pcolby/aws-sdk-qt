// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDATASTORERESPONSE_H
#define QTAWS_CREATEDATASTORERESPONSE_H

#include "iotanalyticsresponse.h"
#include "createdatastorerequest.h"

namespace QtAws {
namespace IoTAnalytics {

class CreateDatastoreResponsePrivate;

class QTAWSIOTANALYTICS_EXPORT CreateDatastoreResponse : public IoTAnalyticsResponse {
    Q_OBJECT

public:
    CreateDatastoreResponse(const CreateDatastoreRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateDatastoreRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDatastoreResponse)
    Q_DISABLE_COPY(CreateDatastoreResponse)

};

} // namespace IoTAnalytics
} // namespace QtAws

#endif

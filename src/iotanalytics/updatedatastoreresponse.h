// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDATASTORERESPONSE_H
#define QTAWS_UPDATEDATASTORERESPONSE_H

#include "iotanalyticsresponse.h"
#include "updatedatastorerequest.h"

namespace QtAws {
namespace IoTAnalytics {

class UpdateDatastoreResponsePrivate;

class QTAWSIOTANALYTICS_EXPORT UpdateDatastoreResponse : public IoTAnalyticsResponse {
    Q_OBJECT

public:
    UpdateDatastoreResponse(const UpdateDatastoreRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateDatastoreRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDatastoreResponse)
    Q_DISABLE_COPY(UpdateDatastoreResponse)

};

} // namespace IoTAnalytics
} // namespace QtAws

#endif

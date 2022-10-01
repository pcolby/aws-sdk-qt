// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDELETEGEOFENCERESPONSE_H
#define QTAWS_BATCHDELETEGEOFENCERESPONSE_H

#include "locationresponse.h"
#include "batchdeletegeofencerequest.h"

namespace QtAws {
namespace Location {

class BatchDeleteGeofenceResponsePrivate;

class QTAWSLOCATION_EXPORT BatchDeleteGeofenceResponse : public LocationResponse {
    Q_OBJECT

public:
    BatchDeleteGeofenceResponse(const BatchDeleteGeofenceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchDeleteGeofenceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchDeleteGeofenceResponse)
    Q_DISABLE_COPY(BatchDeleteGeofenceResponse)

};

} // namespace Location
} // namespace QtAws

#endif

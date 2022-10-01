// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHEVALUATEGEOFENCESRESPONSE_H
#define QTAWS_BATCHEVALUATEGEOFENCESRESPONSE_H

#include "locationresponse.h"
#include "batchevaluategeofencesrequest.h"

namespace QtAws {
namespace Location {

class BatchEvaluateGeofencesResponsePrivate;

class QTAWSLOCATION_EXPORT BatchEvaluateGeofencesResponse : public LocationResponse {
    Q_OBJECT

public:
    BatchEvaluateGeofencesResponse(const BatchEvaluateGeofencesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchEvaluateGeofencesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchEvaluateGeofencesResponse)
    Q_DISABLE_COPY(BatchEvaluateGeofencesResponse)

};

} // namespace Location
} // namespace QtAws

#endif

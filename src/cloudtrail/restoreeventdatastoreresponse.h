// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTOREEVENTDATASTORERESPONSE_H
#define QTAWS_RESTOREEVENTDATASTORERESPONSE_H

#include "cloudtrailresponse.h"
#include "restoreeventdatastorerequest.h"

namespace QtAws {
namespace CloudTrail {

class RestoreEventDataStoreResponsePrivate;

class QTAWSCLOUDTRAIL_EXPORT RestoreEventDataStoreResponse : public CloudTrailResponse {
    Q_OBJECT

public:
    RestoreEventDataStoreResponse(const RestoreEventDataStoreRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RestoreEventDataStoreRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RestoreEventDataStoreResponse)
    Q_DISABLE_COPY(RestoreEventDataStoreResponse)

};

} // namespace CloudTrail
} // namespace QtAws

#endif

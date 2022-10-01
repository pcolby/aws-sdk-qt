// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEVENTDATASTORERESPONSE_H
#define QTAWS_GETEVENTDATASTORERESPONSE_H

#include "cloudtrailresponse.h"
#include "geteventdatastorerequest.h"

namespace QtAws {
namespace CloudTrail {

class GetEventDataStoreResponsePrivate;

class QTAWSCLOUDTRAIL_EXPORT GetEventDataStoreResponse : public CloudTrailResponse {
    Q_OBJECT

public:
    GetEventDataStoreResponse(const GetEventDataStoreRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetEventDataStoreRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEventDataStoreResponse)
    Q_DISABLE_COPY(GetEventDataStoreResponse)

};

} // namespace CloudTrail
} // namespace QtAws

#endif

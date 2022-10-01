// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEEVENTDATASTORERESPONSE_H
#define QTAWS_UPDATEEVENTDATASTORERESPONSE_H

#include "cloudtrailresponse.h"
#include "updateeventdatastorerequest.h"

namespace QtAws {
namespace CloudTrail {

class UpdateEventDataStoreResponsePrivate;

class QTAWSCLOUDTRAIL_EXPORT UpdateEventDataStoreResponse : public CloudTrailResponse {
    Q_OBJECT

public:
    UpdateEventDataStoreResponse(const UpdateEventDataStoreRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateEventDataStoreRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateEventDataStoreResponse)
    Q_DISABLE_COPY(UpdateEventDataStoreResponse)

};

} // namespace CloudTrail
} // namespace QtAws

#endif

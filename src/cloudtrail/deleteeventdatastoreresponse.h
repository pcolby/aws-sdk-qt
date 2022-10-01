// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEVENTDATASTORERESPONSE_H
#define QTAWS_DELETEEVENTDATASTORERESPONSE_H

#include "cloudtrailresponse.h"
#include "deleteeventdatastorerequest.h"

namespace QtAws {
namespace CloudTrail {

class DeleteEventDataStoreResponsePrivate;

class QTAWSCLOUDTRAIL_EXPORT DeleteEventDataStoreResponse : public CloudTrailResponse {
    Q_OBJECT

public:
    DeleteEventDataStoreResponse(const DeleteEventDataStoreRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteEventDataStoreRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteEventDataStoreResponse)
    Q_DISABLE_COPY(DeleteEventDataStoreResponse)

};

} // namespace CloudTrail
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEVENTDATASTORERESPONSE_H
#define QTAWS_CREATEEVENTDATASTORERESPONSE_H

#include "cloudtrailresponse.h"
#include "createeventdatastorerequest.h"

namespace QtAws {
namespace CloudTrail {

class CreateEventDataStoreResponsePrivate;

class QTAWSCLOUDTRAIL_EXPORT CreateEventDataStoreResponse : public CloudTrailResponse {
    Q_OBJECT

public:
    CreateEventDataStoreResponse(const CreateEventDataStoreRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateEventDataStoreRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateEventDataStoreResponse)
    Q_DISABLE_COPY(CreateEventDataStoreResponse)

};

} // namespace CloudTrail
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSETRELATIONSHIPSRESPONSE_H
#define QTAWS_LISTASSETRELATIONSHIPSRESPONSE_H

#include "iotsitewiseresponse.h"
#include "listassetrelationshipsrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class ListAssetRelationshipsResponsePrivate;

class QTAWSIOTSITEWISE_EXPORT ListAssetRelationshipsResponse : public IoTSiteWiseResponse {
    Q_OBJECT

public:
    ListAssetRelationshipsResponse(const ListAssetRelationshipsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAssetRelationshipsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAssetRelationshipsResponse)
    Q_DISABLE_COPY(ListAssetRelationshipsResponse)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif

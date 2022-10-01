// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPIASSOCIATIONRESPONSE_H
#define QTAWS_GETAPIASSOCIATIONRESPONSE_H

#include "appsyncresponse.h"
#include "getapiassociationrequest.h"

namespace QtAws {
namespace AppSync {

class GetApiAssociationResponsePrivate;

class QTAWSAPPSYNC_EXPORT GetApiAssociationResponse : public AppSyncResponse {
    Q_OBJECT

public:
    GetApiAssociationResponse(const GetApiAssociationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetApiAssociationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetApiAssociationResponse)
    Q_DISABLE_COPY(GetApiAssociationResponse)

};

} // namespace AppSync
} // namespace QtAws

#endif

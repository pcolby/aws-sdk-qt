// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESMBLOCALGROUPSRESPONSE_H
#define QTAWS_UPDATESMBLOCALGROUPSRESPONSE_H

#include "storagegatewayresponse.h"
#include "updatesmblocalgroupsrequest.h"

namespace QtAws {
namespace StorageGateway {

class UpdateSMBLocalGroupsResponsePrivate;

class QTAWSSTORAGEGATEWAY_EXPORT UpdateSMBLocalGroupsResponse : public StorageGatewayResponse {
    Q_OBJECT

public:
    UpdateSMBLocalGroupsResponse(const UpdateSMBLocalGroupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateSMBLocalGroupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSMBLocalGroupsResponse)
    Q_DISABLE_COPY(UpdateSMBLocalGroupsResponse)

};

} // namespace StorageGateway
} // namespace QtAws

#endif

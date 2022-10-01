// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECHAPCREDENTIALSRESPONSE_H
#define QTAWS_UPDATECHAPCREDENTIALSRESPONSE_H

#include "storagegatewayresponse.h"
#include "updatechapcredentialsrequest.h"

namespace QtAws {
namespace StorageGateway {

class UpdateChapCredentialsResponsePrivate;

class QTAWSSTORAGEGATEWAY_EXPORT UpdateChapCredentialsResponse : public StorageGatewayResponse {
    Q_OBJECT

public:
    UpdateChapCredentialsResponse(const UpdateChapCredentialsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateChapCredentialsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateChapCredentialsResponse)
    Q_DISABLE_COPY(UpdateChapCredentialsResponse)

};

} // namespace StorageGateway
} // namespace QtAws

#endif

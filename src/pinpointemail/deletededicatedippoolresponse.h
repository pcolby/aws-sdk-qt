// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDEDICATEDIPPOOLRESPONSE_H
#define QTAWS_DELETEDEDICATEDIPPOOLRESPONSE_H

#include "pinpointemailresponse.h"
#include "deletededicatedippoolrequest.h"

namespace QtAws {
namespace PinpointEmail {

class DeleteDedicatedIpPoolResponsePrivate;

class QTAWSPINPOINTEMAIL_EXPORT DeleteDedicatedIpPoolResponse : public PinpointEmailResponse {
    Q_OBJECT

public:
    DeleteDedicatedIpPoolResponse(const DeleteDedicatedIpPoolRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteDedicatedIpPoolRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDedicatedIpPoolResponse)
    Q_DISABLE_COPY(DeleteDedicatedIpPoolResponse)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif

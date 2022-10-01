// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEMAILIDENTITYRESPONSE_H
#define QTAWS_DELETEEMAILIDENTITYRESPONSE_H

#include "pinpointemailresponse.h"
#include "deleteemailidentityrequest.h"

namespace QtAws {
namespace PinpointEmail {

class DeleteEmailIdentityResponsePrivate;

class QTAWSPINPOINTEMAIL_EXPORT DeleteEmailIdentityResponse : public PinpointEmailResponse {
    Q_OBJECT

public:
    DeleteEmailIdentityResponse(const DeleteEmailIdentityRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteEmailIdentityRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteEmailIdentityResponse)
    Q_DISABLE_COPY(DeleteEmailIdentityResponse)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif

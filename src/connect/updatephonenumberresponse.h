// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPHONENUMBERRESPONSE_H
#define QTAWS_UPDATEPHONENUMBERRESPONSE_H

#include "connectresponse.h"
#include "updatephonenumberrequest.h"

namespace QtAws {
namespace Connect {

class UpdatePhoneNumberResponsePrivate;

class QTAWSCONNECT_EXPORT UpdatePhoneNumberResponse : public ConnectResponse {
    Q_OBJECT

public:
    UpdatePhoneNumberResponse(const UpdatePhoneNumberRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdatePhoneNumberRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdatePhoneNumberResponse)
    Q_DISABLE_COPY(UpdatePhoneNumberResponse)

};

} // namespace Connect
} // namespace QtAws

#endif

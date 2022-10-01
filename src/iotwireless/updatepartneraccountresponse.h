// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPARTNERACCOUNTRESPONSE_H
#define QTAWS_UPDATEPARTNERACCOUNTRESPONSE_H

#include "iotwirelessresponse.h"
#include "updatepartneraccountrequest.h"

namespace QtAws {
namespace IoTWireless {

class UpdatePartnerAccountResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT UpdatePartnerAccountResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    UpdatePartnerAccountResponse(const UpdatePartnerAccountRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdatePartnerAccountRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdatePartnerAccountResponse)
    Q_DISABLE_COPY(UpdatePartnerAccountResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif

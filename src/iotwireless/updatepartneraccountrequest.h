// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPARTNERACCOUNTREQUEST_H
#define QTAWS_UPDATEPARTNERACCOUNTREQUEST_H

#include "iotwirelessrequest.h"

namespace QtAws {
namespace IoTWireless {

class UpdatePartnerAccountRequestPrivate;

class QTAWSIOTWIRELESS_EXPORT UpdatePartnerAccountRequest : public IoTWirelessRequest {

public:
    UpdatePartnerAccountRequest(const UpdatePartnerAccountRequest &other);
    UpdatePartnerAccountRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdatePartnerAccountRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEMULTICASTGROUPFROMFUOTATASKREQUEST_H
#define QTAWS_DISASSOCIATEMULTICASTGROUPFROMFUOTATASKREQUEST_H

#include "iotwirelessrequest.h"

namespace QtAws {
namespace IoTWireless {

class DisassociateMulticastGroupFromFuotaTaskRequestPrivate;

class QTAWSIOTWIRELESS_EXPORT DisassociateMulticastGroupFromFuotaTaskRequest : public IoTWirelessRequest {

public:
    DisassociateMulticastGroupFromFuotaTaskRequest(const DisassociateMulticastGroupFromFuotaTaskRequest &other);
    DisassociateMulticastGroupFromFuotaTaskRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateMulticastGroupFromFuotaTaskRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif

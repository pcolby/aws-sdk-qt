// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMULTICASTGROUPREQUEST_H
#define QTAWS_DELETEMULTICASTGROUPREQUEST_H

#include "iotwirelessrequest.h"

namespace QtAws {
namespace IoTWireless {

class DeleteMulticastGroupRequestPrivate;

class QTAWSIOTWIRELESS_EXPORT DeleteMulticastGroupRequest : public IoTWirelessRequest {

public:
    DeleteMulticastGroupRequest(const DeleteMulticastGroupRequest &other);
    DeleteMulticastGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteMulticastGroupRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif

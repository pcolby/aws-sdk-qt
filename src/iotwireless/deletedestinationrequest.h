// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDESTINATIONREQUEST_H
#define QTAWS_DELETEDESTINATIONREQUEST_H

#include "iotwirelessrequest.h"

namespace QtAws {
namespace IoTWireless {

class DeleteDestinationRequestPrivate;

class QTAWSIOTWIRELESS_EXPORT DeleteDestinationRequest : public IoTWirelessRequest {

public:
    DeleteDestinationRequest(const DeleteDestinationRequest &other);
    DeleteDestinationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDestinationRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif

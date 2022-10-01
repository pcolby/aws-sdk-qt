// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESERVICEPROFILEREQUEST_H
#define QTAWS_DELETESERVICEPROFILEREQUEST_H

#include "iotwirelessrequest.h"

namespace QtAws {
namespace IoTWireless {

class DeleteServiceProfileRequestPrivate;

class QTAWSIOTWIRELESS_EXPORT DeleteServiceProfileRequest : public IoTWirelessRequest {

public:
    DeleteServiceProfileRequest(const DeleteServiceProfileRequest &other);
    DeleteServiceProfileRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteServiceProfileRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif

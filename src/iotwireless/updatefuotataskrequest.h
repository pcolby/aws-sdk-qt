// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFUOTATASKREQUEST_H
#define QTAWS_UPDATEFUOTATASKREQUEST_H

#include "iotwirelessrequest.h"

namespace QtAws {
namespace IoTWireless {

class UpdateFuotaTaskRequestPrivate;

class QTAWSIOTWIRELESS_EXPORT UpdateFuotaTaskRequest : public IoTWirelessRequest {

public:
    UpdateFuotaTaskRequest(const UpdateFuotaTaskRequest &other);
    UpdateFuotaTaskRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFuotaTaskRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFUOTATASKREQUEST_H
#define QTAWS_GETFUOTATASKREQUEST_H

#include "iotwirelessrequest.h"

namespace QtAws {
namespace IoTWireless {

class GetFuotaTaskRequestPrivate;

class QTAWSIOTWIRELESS_EXPORT GetFuotaTaskRequest : public IoTWirelessRequest {

public:
    GetFuotaTaskRequest(const GetFuotaTaskRequest &other);
    GetFuotaTaskRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetFuotaTaskRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif

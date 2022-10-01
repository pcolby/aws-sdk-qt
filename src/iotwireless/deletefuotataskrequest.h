// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFUOTATASKREQUEST_H
#define QTAWS_DELETEFUOTATASKREQUEST_H

#include "iotwirelessrequest.h"

namespace QtAws {
namespace IoTWireless {

class DeleteFuotaTaskRequestPrivate;

class QTAWSIOTWIRELESS_EXPORT DeleteFuotaTaskRequest : public IoTWirelessRequest {

public:
    DeleteFuotaTaskRequest(const DeleteFuotaTaskRequest &other);
    DeleteFuotaTaskRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteFuotaTaskRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif

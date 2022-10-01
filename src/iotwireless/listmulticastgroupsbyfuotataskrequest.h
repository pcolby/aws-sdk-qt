// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMULTICASTGROUPSBYFUOTATASKREQUEST_H
#define QTAWS_LISTMULTICASTGROUPSBYFUOTATASKREQUEST_H

#include "iotwirelessrequest.h"

namespace QtAws {
namespace IoTWireless {

class ListMulticastGroupsByFuotaTaskRequestPrivate;

class QTAWSIOTWIRELESS_EXPORT ListMulticastGroupsByFuotaTaskRequest : public IoTWirelessRequest {

public:
    ListMulticastGroupsByFuotaTaskRequest(const ListMulticastGroupsByFuotaTaskRequest &other);
    ListMulticastGroupsByFuotaTaskRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListMulticastGroupsByFuotaTaskRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTHINGSINBILLINGGROUPREQUEST_H
#define QTAWS_LISTTHINGSINBILLINGGROUPREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class ListThingsInBillingGroupRequestPrivate;

class QTAWSIOT_EXPORT ListThingsInBillingGroupRequest : public IoTRequest {

public:
    ListThingsInBillingGroupRequest(const ListThingsInBillingGroupRequest &other);
    ListThingsInBillingGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListThingsInBillingGroupRequest)

};

} // namespace IoT
} // namespace QtAws

#endif

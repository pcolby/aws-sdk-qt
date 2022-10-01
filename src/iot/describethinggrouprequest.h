// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETHINGGROUPREQUEST_H
#define QTAWS_DESCRIBETHINGGROUPREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class DescribeThingGroupRequestPrivate;

class QTAWSIOT_EXPORT DescribeThingGroupRequest : public IoTRequest {

public:
    DescribeThingGroupRequest(const DescribeThingGroupRequest &other);
    DescribeThingGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeThingGroupRequest)

};

} // namespace IoT
} // namespace QtAws

#endif

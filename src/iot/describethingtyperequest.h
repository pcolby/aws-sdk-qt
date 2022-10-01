// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETHINGTYPEREQUEST_H
#define QTAWS_DESCRIBETHINGTYPEREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class DescribeThingTypeRequestPrivate;

class QTAWSIOT_EXPORT DescribeThingTypeRequest : public IoTRequest {

public:
    DescribeThingTypeRequest(const DescribeThingTypeRequest &other);
    DescribeThingTypeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeThingTypeRequest)

};

} // namespace IoT
} // namespace QtAws

#endif

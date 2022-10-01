// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETHINGREGISTRATIONTASKREQUEST_H
#define QTAWS_DESCRIBETHINGREGISTRATIONTASKREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class DescribeThingRegistrationTaskRequestPrivate;

class QTAWSIOT_EXPORT DescribeThingRegistrationTaskRequest : public IoTRequest {

public:
    DescribeThingRegistrationTaskRequest(const DescribeThingRegistrationTaskRequest &other);
    DescribeThingRegistrationTaskRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeThingRegistrationTaskRequest)

};

} // namespace IoT
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTHINGREGISTRATIONTASKSREQUEST_H
#define QTAWS_LISTTHINGREGISTRATIONTASKSREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class ListThingRegistrationTasksRequestPrivate;

class QTAWSIOT_EXPORT ListThingRegistrationTasksRequest : public IoTRequest {

public:
    ListThingRegistrationTasksRequest(const ListThingRegistrationTasksRequest &other);
    ListThingRegistrationTasksRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListThingRegistrationTasksRequest)

};

} // namespace IoT
} // namespace QtAws

#endif

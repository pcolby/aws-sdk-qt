// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTHINGREGISTRATIONTASKREPORTSREQUEST_H
#define QTAWS_LISTTHINGREGISTRATIONTASKREPORTSREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class ListThingRegistrationTaskReportsRequestPrivate;

class QTAWSIOT_EXPORT ListThingRegistrationTaskReportsRequest : public IoTRequest {

public:
    ListThingRegistrationTaskReportsRequest(const ListThingRegistrationTaskReportsRequest &other);
    ListThingRegistrationTaskReportsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListThingRegistrationTaskReportsRequest)

};

} // namespace IoT
} // namespace QtAws

#endif

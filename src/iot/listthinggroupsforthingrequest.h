// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTHINGGROUPSFORTHINGREQUEST_H
#define QTAWS_LISTTHINGGROUPSFORTHINGREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class ListThingGroupsForThingRequestPrivate;

class QTAWSIOT_EXPORT ListThingGroupsForThingRequest : public IoTRequest {

public:
    ListThingGroupsForThingRequest(const ListThingGroupsForThingRequest &other);
    ListThingGroupsForThingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListThingGroupsForThingRequest)

};

} // namespace IoT
} // namespace QtAws

#endif

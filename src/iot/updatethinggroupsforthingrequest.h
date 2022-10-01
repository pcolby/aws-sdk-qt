// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETHINGGROUPSFORTHINGREQUEST_H
#define QTAWS_UPDATETHINGGROUPSFORTHINGREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class UpdateThingGroupsForThingRequestPrivate;

class QTAWSIOT_EXPORT UpdateThingGroupsForThingRequest : public IoTRequest {

public:
    UpdateThingGroupsForThingRequest(const UpdateThingGroupsForThingRequest &other);
    UpdateThingGroupsForThingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateThingGroupsForThingRequest)

};

} // namespace IoT
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDYNAMICTHINGGROUPREQUEST_H
#define QTAWS_UPDATEDYNAMICTHINGGROUPREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class UpdateDynamicThingGroupRequestPrivate;

class QTAWSIOT_EXPORT UpdateDynamicThingGroupRequest : public IoTRequest {

public:
    UpdateDynamicThingGroupRequest(const UpdateDynamicThingGroupRequest &other);
    UpdateDynamicThingGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDynamicThingGroupRequest)

};

} // namespace IoT
} // namespace QtAws

#endif

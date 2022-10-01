// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDYNAMICTHINGGROUPREQUEST_H
#define QTAWS_DELETEDYNAMICTHINGGROUPREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class DeleteDynamicThingGroupRequestPrivate;

class QTAWSIOT_EXPORT DeleteDynamicThingGroupRequest : public IoTRequest {

public:
    DeleteDynamicThingGroupRequest(const DeleteDynamicThingGroupRequest &other);
    DeleteDynamicThingGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDynamicThingGroupRequest)

};

} // namespace IoT
} // namespace QtAws

#endif

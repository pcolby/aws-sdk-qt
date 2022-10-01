// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETHINGGROUPREQUEST_H
#define QTAWS_UPDATETHINGGROUPREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class UpdateThingGroupRequestPrivate;

class QTAWSIOT_EXPORT UpdateThingGroupRequest : public IoTRequest {

public:
    UpdateThingGroupRequest(const UpdateThingGroupRequest &other);
    UpdateThingGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateThingGroupRequest)

};

} // namespace IoT
} // namespace QtAws

#endif

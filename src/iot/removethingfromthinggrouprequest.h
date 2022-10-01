// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVETHINGFROMTHINGGROUPREQUEST_H
#define QTAWS_REMOVETHINGFROMTHINGGROUPREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class RemoveThingFromThingGroupRequestPrivate;

class QTAWSIOT_EXPORT RemoveThingFromThingGroupRequest : public IoTRequest {

public:
    RemoveThingFromThingGroupRequest(const RemoveThingFromThingGroupRequest &other);
    RemoveThingFromThingGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemoveThingFromThingGroupRequest)

};

} // namespace IoT
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDTHINGTOTHINGGROUPREQUEST_H
#define QTAWS_ADDTHINGTOTHINGGROUPREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class AddThingToThingGroupRequestPrivate;

class QTAWSIOT_EXPORT AddThingToThingGroupRequest : public IoTRequest {

public:
    AddThingToThingGroupRequest(const AddThingToThingGroupRequest &other);
    AddThingToThingGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddThingToThingGroupRequest)

};

} // namespace IoT
} // namespace QtAws

#endif

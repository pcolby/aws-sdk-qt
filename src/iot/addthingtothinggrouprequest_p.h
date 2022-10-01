// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDTHINGTOTHINGGROUPREQUEST_P_H
#define QTAWS_ADDTHINGTOTHINGGROUPREQUEST_P_H

#include "iotrequest_p.h"
#include "addthingtothinggrouprequest.h"

namespace QtAws {
namespace IoT {

class AddThingToThingGroupRequest;

class AddThingToThingGroupRequestPrivate : public IoTRequestPrivate {

public:
    AddThingToThingGroupRequestPrivate(const IoTRequest::Action action,
                                   AddThingToThingGroupRequest * const q);
    AddThingToThingGroupRequestPrivate(const AddThingToThingGroupRequestPrivate &other,
                                   AddThingToThingGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(AddThingToThingGroupRequest)

};

} // namespace IoT
} // namespace QtAws

#endif

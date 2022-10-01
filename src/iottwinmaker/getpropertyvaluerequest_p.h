// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPROPERTYVALUEREQUEST_P_H
#define QTAWS_GETPROPERTYVALUEREQUEST_P_H

#include "iottwinmakerrequest_p.h"
#include "getpropertyvaluerequest.h"

namespace QtAws {
namespace IoTTwinMaker {

class GetPropertyValueRequest;

class GetPropertyValueRequestPrivate : public IoTTwinMakerRequestPrivate {

public:
    GetPropertyValueRequestPrivate(const IoTTwinMakerRequest::Action action,
                                   GetPropertyValueRequest * const q);
    GetPropertyValueRequestPrivate(const GetPropertyValueRequestPrivate &other,
                                   GetPropertyValueRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetPropertyValueRequest)

};

} // namespace IoTTwinMaker
} // namespace QtAws

#endif

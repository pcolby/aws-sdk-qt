// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEPRECATETHINGTYPEREQUEST_P_H
#define QTAWS_DEPRECATETHINGTYPEREQUEST_P_H

#include "iotrequest_p.h"
#include "deprecatethingtyperequest.h"

namespace QtAws {
namespace IoT {

class DeprecateThingTypeRequest;

class DeprecateThingTypeRequestPrivate : public IoTRequestPrivate {

public:
    DeprecateThingTypeRequestPrivate(const IoTRequest::Action action,
                                   DeprecateThingTypeRequest * const q);
    DeprecateThingTypeRequestPrivate(const DeprecateThingTypeRequestPrivate &other,
                                   DeprecateThingTypeRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeprecateThingTypeRequest)

};

} // namespace IoT
} // namespace QtAws

#endif

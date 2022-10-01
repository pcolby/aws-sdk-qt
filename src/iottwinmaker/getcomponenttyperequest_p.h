// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOMPONENTTYPEREQUEST_P_H
#define QTAWS_GETCOMPONENTTYPEREQUEST_P_H

#include "iottwinmakerrequest_p.h"
#include "getcomponenttyperequest.h"

namespace QtAws {
namespace IoTTwinMaker {

class GetComponentTypeRequest;

class GetComponentTypeRequestPrivate : public IoTTwinMakerRequestPrivate {

public:
    GetComponentTypeRequestPrivate(const IoTTwinMakerRequest::Action action,
                                   GetComponentTypeRequest * const q);
    GetComponentTypeRequestPrivate(const GetComponentTypeRequestPrivate &other,
                                   GetComponentTypeRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetComponentTypeRequest)

};

} // namespace IoTTwinMaker
} // namespace QtAws

#endif

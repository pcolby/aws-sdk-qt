// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETENTITYREQUEST_P_H
#define QTAWS_GETENTITYREQUEST_P_H

#include "iottwinmakerrequest_p.h"
#include "getentityrequest.h"

namespace QtAws {
namespace IoTTwinMaker {

class GetEntityRequest;

class GetEntityRequestPrivate : public IoTTwinMakerRequestPrivate {

public:
    GetEntityRequestPrivate(const IoTTwinMakerRequest::Action action,
                                   GetEntityRequest * const q);
    GetEntityRequestPrivate(const GetEntityRequestPrivate &other,
                                   GetEntityRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetEntityRequest)

};

} // namespace IoTTwinMaker
} // namespace QtAws

#endif

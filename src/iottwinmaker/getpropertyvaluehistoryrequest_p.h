// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPROPERTYVALUEHISTORYREQUEST_P_H
#define QTAWS_GETPROPERTYVALUEHISTORYREQUEST_P_H

#include "iottwinmakerrequest_p.h"
#include "getpropertyvaluehistoryrequest.h"

namespace QtAws {
namespace IoTTwinMaker {

class GetPropertyValueHistoryRequest;

class GetPropertyValueHistoryRequestPrivate : public IoTTwinMakerRequestPrivate {

public:
    GetPropertyValueHistoryRequestPrivate(const IoTTwinMakerRequest::Action action,
                                   GetPropertyValueHistoryRequest * const q);
    GetPropertyValueHistoryRequestPrivate(const GetPropertyValueHistoryRequestPrivate &other,
                                   GetPropertyValueHistoryRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetPropertyValueHistoryRequest)

};

} // namespace IoTTwinMaker
} // namespace QtAws

#endif

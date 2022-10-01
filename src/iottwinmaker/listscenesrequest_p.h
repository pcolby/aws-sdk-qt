// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSCENESREQUEST_P_H
#define QTAWS_LISTSCENESREQUEST_P_H

#include "iottwinmakerrequest_p.h"
#include "listscenesrequest.h"

namespace QtAws {
namespace IoTTwinMaker {

class ListScenesRequest;

class ListScenesRequestPrivate : public IoTTwinMakerRequestPrivate {

public:
    ListScenesRequestPrivate(const IoTTwinMakerRequest::Action action,
                                   ListScenesRequest * const q);
    ListScenesRequestPrivate(const ListScenesRequestPrivate &other,
                                   ListScenesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListScenesRequest)

};

} // namespace IoTTwinMaker
} // namespace QtAws

#endif

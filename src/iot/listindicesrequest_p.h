// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINDICESREQUEST_P_H
#define QTAWS_LISTINDICESREQUEST_P_H

#include "iotrequest_p.h"
#include "listindicesrequest.h"

namespace QtAws {
namespace IoT {

class ListIndicesRequest;

class ListIndicesRequestPrivate : public IoTRequestPrivate {

public:
    ListIndicesRequestPrivate(const IoTRequest::Action action,
                                   ListIndicesRequest * const q);
    ListIndicesRequestPrivate(const ListIndicesRequestPrivate &other,
                                   ListIndicesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListIndicesRequest)

};

} // namespace IoT
} // namespace QtAws

#endif

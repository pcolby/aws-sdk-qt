// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTREAMSREQUEST_P_H
#define QTAWS_LISTSTREAMSREQUEST_P_H

#include "iotrequest_p.h"
#include "liststreamsrequest.h"

namespace QtAws {
namespace IoT {

class ListStreamsRequest;

class ListStreamsRequestPrivate : public IoTRequestPrivate {

public:
    ListStreamsRequestPrivate(const IoTRequest::Action action,
                                   ListStreamsRequest * const q);
    ListStreamsRequestPrivate(const ListStreamsRequestPrivate &other,
                                   ListStreamsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListStreamsRequest)

};

} // namespace IoT
} // namespace QtAws

#endif

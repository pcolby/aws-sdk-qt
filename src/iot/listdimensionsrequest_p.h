// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDIMENSIONSREQUEST_P_H
#define QTAWS_LISTDIMENSIONSREQUEST_P_H

#include "iotrequest_p.h"
#include "listdimensionsrequest.h"

namespace QtAws {
namespace IoT {

class ListDimensionsRequest;

class ListDimensionsRequestPrivate : public IoTRequestPrivate {

public:
    ListDimensionsRequestPrivate(const IoTRequest::Action action,
                                   ListDimensionsRequest * const q);
    ListDimensionsRequestPrivate(const ListDimensionsRequestPrivate &other,
                                   ListDimensionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDimensionsRequest)

};

} // namespace IoT
} // namespace QtAws

#endif

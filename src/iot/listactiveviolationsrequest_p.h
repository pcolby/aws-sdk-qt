// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACTIVEVIOLATIONSREQUEST_P_H
#define QTAWS_LISTACTIVEVIOLATIONSREQUEST_P_H

#include "iotrequest_p.h"
#include "listactiveviolationsrequest.h"

namespace QtAws {
namespace IoT {

class ListActiveViolationsRequest;

class ListActiveViolationsRequestPrivate : public IoTRequestPrivate {

public:
    ListActiveViolationsRequestPrivate(const IoTRequest::Action action,
                                   ListActiveViolationsRequest * const q);
    ListActiveViolationsRequestPrivate(const ListActiveViolationsRequestPrivate &other,
                                   ListActiveViolationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListActiveViolationsRequest)

};

} // namespace IoT
} // namespace QtAws

#endif

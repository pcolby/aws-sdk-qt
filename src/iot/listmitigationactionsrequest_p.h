// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMITIGATIONACTIONSREQUEST_P_H
#define QTAWS_LISTMITIGATIONACTIONSREQUEST_P_H

#include "iotrequest_p.h"
#include "listmitigationactionsrequest.h"

namespace QtAws {
namespace IoT {

class ListMitigationActionsRequest;

class ListMitigationActionsRequestPrivate : public IoTRequestPrivate {

public:
    ListMitigationActionsRequestPrivate(const IoTRequest::Action action,
                                   ListMitigationActionsRequest * const q);
    ListMitigationActionsRequestPrivate(const ListMitigationActionsRequestPrivate &other,
                                   ListMitigationActionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListMitigationActionsRequest)

};

} // namespace IoT
} // namespace QtAws

#endif

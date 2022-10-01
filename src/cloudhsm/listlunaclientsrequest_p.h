// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLUNACLIENTSREQUEST_P_H
#define QTAWS_LISTLUNACLIENTSREQUEST_P_H

#include "cloudhsmrequest_p.h"
#include "listlunaclientsrequest.h"

namespace QtAws {
namespace CloudHsm {

class ListLunaClientsRequest;

class ListLunaClientsRequestPrivate : public CloudHsmRequestPrivate {

public:
    ListLunaClientsRequestPrivate(const CloudHsmRequest::Action action,
                                   ListLunaClientsRequest * const q);
    ListLunaClientsRequestPrivate(const ListLunaClientsRequestPrivate &other,
                                   ListLunaClientsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListLunaClientsRequest)

};

} // namespace CloudHsm
} // namespace QtAws

#endif

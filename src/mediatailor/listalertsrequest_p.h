// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTALERTSREQUEST_P_H
#define QTAWS_LISTALERTSREQUEST_P_H

#include "mediatailorrequest_p.h"
#include "listalertsrequest.h"

namespace QtAws {
namespace MediaTailor {

class ListAlertsRequest;

class ListAlertsRequestPrivate : public MediaTailorRequestPrivate {

public:
    ListAlertsRequestPrivate(const MediaTailorRequest::Action action,
                                   ListAlertsRequest * const q);
    ListAlertsRequestPrivate(const ListAlertsRequestPrivate &other,
                                   ListAlertsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAlertsRequest)

};

} // namespace MediaTailor
} // namespace QtAws

#endif

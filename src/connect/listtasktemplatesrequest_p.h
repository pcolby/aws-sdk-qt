// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTASKTEMPLATESREQUEST_P_H
#define QTAWS_LISTTASKTEMPLATESREQUEST_P_H

#include "connectrequest_p.h"
#include "listtasktemplatesrequest.h"

namespace QtAws {
namespace Connect {

class ListTaskTemplatesRequest;

class ListTaskTemplatesRequestPrivate : public ConnectRequestPrivate {

public:
    ListTaskTemplatesRequestPrivate(const ConnectRequest::Action action,
                                   ListTaskTemplatesRequest * const q);
    ListTaskTemplatesRequestPrivate(const ListTaskTemplatesRequestPrivate &other,
                                   ListTaskTemplatesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListTaskTemplatesRequest)

};

} // namespace Connect
} // namespace QtAws

#endif

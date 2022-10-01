// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENGAGEMENTSREQUEST_P_H
#define QTAWS_LISTENGAGEMENTSREQUEST_P_H

#include "ssmcontactsrequest_p.h"
#include "listengagementsrequest.h"

namespace QtAws {
namespace SsmContacts {

class ListEngagementsRequest;

class ListEngagementsRequestPrivate : public SsmContactsRequestPrivate {

public:
    ListEngagementsRequestPrivate(const SsmContactsRequest::Action action,
                                   ListEngagementsRequest * const q);
    ListEngagementsRequestPrivate(const ListEngagementsRequestPrivate &other,
                                   ListEngagementsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListEngagementsRequest)

};

} // namespace SsmContacts
} // namespace QtAws

#endif

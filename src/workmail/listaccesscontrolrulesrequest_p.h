// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCESSCONTROLRULESREQUEST_P_H
#define QTAWS_LISTACCESSCONTROLRULESREQUEST_P_H

#include "workmailrequest_p.h"
#include "listaccesscontrolrulesrequest.h"

namespace QtAws {
namespace WorkMail {

class ListAccessControlRulesRequest;

class ListAccessControlRulesRequestPrivate : public WorkMailRequestPrivate {

public:
    ListAccessControlRulesRequestPrivate(const WorkMailRequest::Action action,
                                   ListAccessControlRulesRequest * const q);
    ListAccessControlRulesRequestPrivate(const ListAccessControlRulesRequestPrivate &other,
                                   ListAccessControlRulesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAccessControlRulesRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif

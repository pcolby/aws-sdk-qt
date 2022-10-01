// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTPAGEREQUEST_P_H
#define QTAWS_ACCEPTPAGEREQUEST_P_H

#include "ssmcontactsrequest_p.h"
#include "acceptpagerequest.h"

namespace QtAws {
namespace SsmContacts {

class AcceptPageRequest;

class AcceptPageRequestPrivate : public SsmContactsRequestPrivate {

public:
    AcceptPageRequestPrivate(const SsmContactsRequest::Action action,
                                   AcceptPageRequest * const q);
    AcceptPageRequestPrivate(const AcceptPageRequestPrivate &other,
                                   AcceptPageRequest * const q);

private:
    Q_DECLARE_PUBLIC(AcceptPageRequest)

};

} // namespace SsmContacts
} // namespace QtAws

#endif

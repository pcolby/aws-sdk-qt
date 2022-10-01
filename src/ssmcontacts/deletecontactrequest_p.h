// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONTACTREQUEST_P_H
#define QTAWS_DELETECONTACTREQUEST_P_H

#include "ssmcontactsrequest_p.h"
#include "deletecontactrequest.h"

namespace QtAws {
namespace SsmContacts {

class DeleteContactRequest;

class DeleteContactRequestPrivate : public SsmContactsRequestPrivate {

public:
    DeleteContactRequestPrivate(const SsmContactsRequest::Action action,
                                   DeleteContactRequest * const q);
    DeleteContactRequestPrivate(const DeleteContactRequestPrivate &other,
                                   DeleteContactRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteContactRequest)

};

} // namespace SsmContacts
} // namespace QtAws

#endif

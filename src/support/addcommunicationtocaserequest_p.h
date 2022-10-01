// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDCOMMUNICATIONTOCASEREQUEST_P_H
#define QTAWS_ADDCOMMUNICATIONTOCASEREQUEST_P_H

#include "supportrequest_p.h"
#include "addcommunicationtocaserequest.h"

namespace QtAws {
namespace Support {

class AddCommunicationToCaseRequest;

class AddCommunicationToCaseRequestPrivate : public SupportRequestPrivate {

public:
    AddCommunicationToCaseRequestPrivate(const SupportRequest::Action action,
                                   AddCommunicationToCaseRequest * const q);
    AddCommunicationToCaseRequestPrivate(const AddCommunicationToCaseRequestPrivate &other,
                                   AddCommunicationToCaseRequest * const q);

private:
    Q_DECLARE_PUBLIC(AddCommunicationToCaseRequest)

};

} // namespace Support
} // namespace QtAws

#endif

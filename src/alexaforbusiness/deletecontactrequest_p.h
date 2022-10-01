// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONTACTREQUEST_P_H
#define QTAWS_DELETECONTACTREQUEST_P_H

#include "alexaforbusinessrequest_p.h"
#include "deletecontactrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class DeleteContactRequest;

class DeleteContactRequestPrivate : public AlexaForBusinessRequestPrivate {

public:
    DeleteContactRequestPrivate(const AlexaForBusinessRequest::Action action,
                                   DeleteContactRequest * const q);
    DeleteContactRequestPrivate(const DeleteContactRequestPrivate &other,
                                   DeleteContactRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteContactRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif

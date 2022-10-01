// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEORGANIZATIONREQUEST_P_H
#define QTAWS_DELETEORGANIZATIONREQUEST_P_H

#include "workmailrequest_p.h"
#include "deleteorganizationrequest.h"

namespace QtAws {
namespace WorkMail {

class DeleteOrganizationRequest;

class DeleteOrganizationRequestPrivate : public WorkMailRequestPrivate {

public:
    DeleteOrganizationRequestPrivate(const WorkMailRequest::Action action,
                                   DeleteOrganizationRequest * const q);
    DeleteOrganizationRequestPrivate(const DeleteOrganizationRequestPrivate &other,
                                   DeleteOrganizationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteOrganizationRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif

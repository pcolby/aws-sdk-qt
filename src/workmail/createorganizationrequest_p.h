// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEORGANIZATIONREQUEST_P_H
#define QTAWS_CREATEORGANIZATIONREQUEST_P_H

#include "workmailrequest_p.h"
#include "createorganizationrequest.h"

namespace QtAws {
namespace WorkMail {

class CreateOrganizationRequest;

class CreateOrganizationRequestPrivate : public WorkMailRequestPrivate {

public:
    CreateOrganizationRequestPrivate(const WorkMailRequest::Action action,
                                   CreateOrganizationRequest * const q);
    CreateOrganizationRequestPrivate(const CreateOrganizationRequestPrivate &other,
                                   CreateOrganizationRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateOrganizationRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif

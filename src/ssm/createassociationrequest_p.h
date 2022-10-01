// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEASSOCIATIONREQUEST_P_H
#define QTAWS_CREATEASSOCIATIONREQUEST_P_H

#include "ssmrequest_p.h"
#include "createassociationrequest.h"

namespace QtAws {
namespace Ssm {

class CreateAssociationRequest;

class CreateAssociationRequestPrivate : public SsmRequestPrivate {

public:
    CreateAssociationRequestPrivate(const SsmRequest::Action action,
                                   CreateAssociationRequest * const q);
    CreateAssociationRequestPrivate(const CreateAssociationRequestPrivate &other,
                                   CreateAssociationRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateAssociationRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif

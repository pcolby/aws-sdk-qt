// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEASSOCIATIONREQUEST_P_H
#define QTAWS_UPDATEASSOCIATIONREQUEST_P_H

#include "ssmrequest_p.h"
#include "updateassociationrequest.h"

namespace QtAws {
namespace Ssm {

class UpdateAssociationRequest;

class UpdateAssociationRequestPrivate : public SsmRequestPrivate {

public:
    UpdateAssociationRequestPrivate(const SsmRequest::Action action,
                                   UpdateAssociationRequest * const q);
    UpdateAssociationRequestPrivate(const UpdateAssociationRequestPrivate &other,
                                   UpdateAssociationRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateAssociationRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif

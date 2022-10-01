// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEASSOCIATIONSTATUSREQUEST_P_H
#define QTAWS_UPDATEASSOCIATIONSTATUSREQUEST_P_H

#include "ssmrequest_p.h"
#include "updateassociationstatusrequest.h"

namespace QtAws {
namespace Ssm {

class UpdateAssociationStatusRequest;

class UpdateAssociationStatusRequestPrivate : public SsmRequestPrivate {

public:
    UpdateAssociationStatusRequestPrivate(const SsmRequest::Action action,
                                   UpdateAssociationStatusRequest * const q);
    UpdateAssociationStatusRequestPrivate(const UpdateAssociationStatusRequestPrivate &other,
                                   UpdateAssociationStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateAssociationStatusRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEASSOCIATIONREQUEST_P_H
#define QTAWS_DELETEASSOCIATIONREQUEST_P_H

#include "ssmrequest_p.h"
#include "deleteassociationrequest.h"

namespace QtAws {
namespace Ssm {

class DeleteAssociationRequest;

class DeleteAssociationRequestPrivate : public SsmRequestPrivate {

public:
    DeleteAssociationRequestPrivate(const SsmRequest::Action action,
                                   DeleteAssociationRequest * const q);
    DeleteAssociationRequestPrivate(const DeleteAssociationRequestPrivate &other,
                                   DeleteAssociationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteAssociationRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif

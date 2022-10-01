// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEASSOCIATIONBATCHREQUEST_P_H
#define QTAWS_CREATEASSOCIATIONBATCHREQUEST_P_H

#include "ssmrequest_p.h"
#include "createassociationbatchrequest.h"

namespace QtAws {
namespace Ssm {

class CreateAssociationBatchRequest;

class CreateAssociationBatchRequestPrivate : public SsmRequestPrivate {

public:
    CreateAssociationBatchRequestPrivate(const SsmRequest::Action action,
                                   CreateAssociationBatchRequest * const q);
    CreateAssociationBatchRequestPrivate(const CreateAssociationBatchRequestPrivate &other,
                                   CreateAssociationBatchRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateAssociationBatchRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif

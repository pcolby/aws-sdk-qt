// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDASSOCIATIONREQUEST_P_H
#define QTAWS_ADDASSOCIATIONREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "addassociationrequest.h"

namespace QtAws {
namespace SageMaker {

class AddAssociationRequest;

class AddAssociationRequestPrivate : public SageMakerRequestPrivate {

public:
    AddAssociationRequestPrivate(const SageMakerRequest::Action action,
                                   AddAssociationRequest * const q);
    AddAssociationRequestPrivate(const AddAssociationRequestPrivate &other,
                                   AddAssociationRequest * const q);

private:
    Q_DECLARE_PUBLIC(AddAssociationRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif

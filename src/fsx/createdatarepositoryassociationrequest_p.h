// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDATAREPOSITORYASSOCIATIONREQUEST_P_H
#define QTAWS_CREATEDATAREPOSITORYASSOCIATIONREQUEST_P_H

#include "fsxrequest_p.h"
#include "createdatarepositoryassociationrequest.h"

namespace QtAws {
namespace FSx {

class CreateDataRepositoryAssociationRequest;

class CreateDataRepositoryAssociationRequestPrivate : public FSxRequestPrivate {

public:
    CreateDataRepositoryAssociationRequestPrivate(const FSxRequest::Action action,
                                   CreateDataRepositoryAssociationRequest * const q);
    CreateDataRepositoryAssociationRequestPrivate(const CreateDataRepositoryAssociationRequestPrivate &other,
                                   CreateDataRepositoryAssociationRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDataRepositoryAssociationRequest)

};

} // namespace FSx
} // namespace QtAws

#endif

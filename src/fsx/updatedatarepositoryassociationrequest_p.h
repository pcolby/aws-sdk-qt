// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDATAREPOSITORYASSOCIATIONREQUEST_P_H
#define QTAWS_UPDATEDATAREPOSITORYASSOCIATIONREQUEST_P_H

#include "fsxrequest_p.h"
#include "updatedatarepositoryassociationrequest.h"

namespace QtAws {
namespace FSx {

class UpdateDataRepositoryAssociationRequest;

class UpdateDataRepositoryAssociationRequestPrivate : public FSxRequestPrivate {

public:
    UpdateDataRepositoryAssociationRequestPrivate(const FSxRequest::Action action,
                                   UpdateDataRepositoryAssociationRequest * const q);
    UpdateDataRepositoryAssociationRequestPrivate(const UpdateDataRepositoryAssociationRequestPrivate &other,
                                   UpdateDataRepositoryAssociationRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateDataRepositoryAssociationRequest)

};

} // namespace FSx
} // namespace QtAws

#endif

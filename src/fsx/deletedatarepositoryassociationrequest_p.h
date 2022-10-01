// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDATAREPOSITORYASSOCIATIONREQUEST_P_H
#define QTAWS_DELETEDATAREPOSITORYASSOCIATIONREQUEST_P_H

#include "fsxrequest_p.h"
#include "deletedatarepositoryassociationrequest.h"

namespace QtAws {
namespace FSx {

class DeleteDataRepositoryAssociationRequest;

class DeleteDataRepositoryAssociationRequestPrivate : public FSxRequestPrivate {

public:
    DeleteDataRepositoryAssociationRequestPrivate(const FSxRequest::Action action,
                                   DeleteDataRepositoryAssociationRequest * const q);
    DeleteDataRepositoryAssociationRequestPrivate(const DeleteDataRepositoryAssociationRequestPrivate &other,
                                   DeleteDataRepositoryAssociationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteDataRepositoryAssociationRequest)

};

} // namespace FSx
} // namespace QtAws

#endif

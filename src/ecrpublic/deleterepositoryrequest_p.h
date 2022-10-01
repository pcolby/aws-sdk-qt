// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREPOSITORYREQUEST_P_H
#define QTAWS_DELETEREPOSITORYREQUEST_P_H

#include "ecrpublicrequest_p.h"
#include "deleterepositoryrequest.h"

namespace QtAws {
namespace EcrPublic {

class DeleteRepositoryRequest;

class DeleteRepositoryRequestPrivate : public EcrPublicRequestPrivate {

public:
    DeleteRepositoryRequestPrivate(const EcrPublicRequest::Action action,
                                   DeleteRepositoryRequest * const q);
    DeleteRepositoryRequestPrivate(const DeleteRepositoryRequestPrivate &other,
                                   DeleteRepositoryRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteRepositoryRequest)

};

} // namespace EcrPublic
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREPOSITORYREQUEST_P_H
#define QTAWS_DELETEREPOSITORYREQUEST_P_H

#include "protonrequest_p.h"
#include "deleterepositoryrequest.h"

namespace QtAws {
namespace Proton {

class DeleteRepositoryRequest;

class DeleteRepositoryRequestPrivate : public ProtonRequestPrivate {

public:
    DeleteRepositoryRequestPrivate(const ProtonRequest::Action action,
                                   DeleteRepositoryRequest * const q);
    DeleteRepositoryRequestPrivate(const DeleteRepositoryRequestPrivate &other,
                                   DeleteRepositoryRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteRepositoryRequest)

};

} // namespace Proton
} // namespace QtAws

#endif

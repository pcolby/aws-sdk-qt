// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREPOSITORYREQUEST_P_H
#define QTAWS_CREATEREPOSITORYREQUEST_P_H

#include "protonrequest_p.h"
#include "createrepositoryrequest.h"

namespace QtAws {
namespace Proton {

class CreateRepositoryRequest;

class CreateRepositoryRequestPrivate : public ProtonRequestPrivate {

public:
    CreateRepositoryRequestPrivate(const ProtonRequest::Action action,
                                   CreateRepositoryRequest * const q);
    CreateRepositoryRequestPrivate(const CreateRepositoryRequestPrivate &other,
                                   CreateRepositoryRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateRepositoryRequest)

};

} // namespace Proton
} // namespace QtAws

#endif

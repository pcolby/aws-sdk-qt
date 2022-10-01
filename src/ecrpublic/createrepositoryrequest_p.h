// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREPOSITORYREQUEST_P_H
#define QTAWS_CREATEREPOSITORYREQUEST_P_H

#include "ecrpublicrequest_p.h"
#include "createrepositoryrequest.h"

namespace QtAws {
namespace EcrPublic {

class CreateRepositoryRequest;

class CreateRepositoryRequestPrivate : public EcrPublicRequestPrivate {

public:
    CreateRepositoryRequestPrivate(const EcrPublicRequest::Action action,
                                   CreateRepositoryRequest * const q);
    CreateRepositoryRequestPrivate(const CreateRepositoryRequestPrivate &other,
                                   CreateRepositoryRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateRepositoryRequest)

};

} // namespace EcrPublic
} // namespace QtAws

#endif

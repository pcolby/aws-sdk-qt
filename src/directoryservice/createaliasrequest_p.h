// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEALIASREQUEST_P_H
#define QTAWS_CREATEALIASREQUEST_P_H

#include "directoryservicerequest_p.h"
#include "createaliasrequest.h"

namespace QtAws {
namespace DirectoryService {

class CreateAliasRequest;

class CreateAliasRequestPrivate : public DirectoryServiceRequestPrivate {

public:
    CreateAliasRequestPrivate(const DirectoryServiceRequest::Action action,
                                   CreateAliasRequest * const q);
    CreateAliasRequestPrivate(const CreateAliasRequestPrivate &other,
                                   CreateAliasRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateAliasRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif

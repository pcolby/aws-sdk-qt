// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRUSTREQUEST_P_H
#define QTAWS_CREATETRUSTREQUEST_P_H

#include "directoryservicerequest_p.h"
#include "createtrustrequest.h"

namespace QtAws {
namespace DirectoryService {

class CreateTrustRequest;

class CreateTrustRequestPrivate : public DirectoryServiceRequestPrivate {

public:
    CreateTrustRequestPrivate(const DirectoryServiceRequest::Action action,
                                   CreateTrustRequest * const q);
    CreateTrustRequestPrivate(const CreateTrustRequestPrivate &other,
                                   CreateTrustRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateTrustRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECOMPUTERREQUEST_P_H
#define QTAWS_CREATECOMPUTERREQUEST_P_H

#include "directoryservicerequest_p.h"
#include "createcomputerrequest.h"

namespace QtAws {
namespace DirectoryService {

class CreateComputerRequest;

class CreateComputerRequestPrivate : public DirectoryServiceRequestPrivate {

public:
    CreateComputerRequestPrivate(const DirectoryServiceRequest::Action action,
                                   CreateComputerRequest * const q);
    CreateComputerRequestPrivate(const CreateComputerRequestPrivate &other,
                                   CreateComputerRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateComputerRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif

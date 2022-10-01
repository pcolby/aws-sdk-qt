// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONDITIONALFORWARDERREQUEST_P_H
#define QTAWS_CREATECONDITIONALFORWARDERREQUEST_P_H

#include "directoryservicerequest_p.h"
#include "createconditionalforwarderrequest.h"

namespace QtAws {
namespace DirectoryService {

class CreateConditionalForwarderRequest;

class CreateConditionalForwarderRequestPrivate : public DirectoryServiceRequestPrivate {

public:
    CreateConditionalForwarderRequestPrivate(const DirectoryServiceRequest::Action action,
                                   CreateConditionalForwarderRequest * const q);
    CreateConditionalForwarderRequestPrivate(const CreateConditionalForwarderRequestPrivate &other,
                                   CreateConditionalForwarderRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateConditionalForwarderRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONDITIONALFORWARDERREQUEST_P_H
#define QTAWS_DELETECONDITIONALFORWARDERREQUEST_P_H

#include "directoryservicerequest_p.h"
#include "deleteconditionalforwarderrequest.h"

namespace QtAws {
namespace DirectoryService {

class DeleteConditionalForwarderRequest;

class DeleteConditionalForwarderRequestPrivate : public DirectoryServiceRequestPrivate {

public:
    DeleteConditionalForwarderRequestPrivate(const DirectoryServiceRequest::Action action,
                                   DeleteConditionalForwarderRequest * const q);
    DeleteConditionalForwarderRequestPrivate(const DeleteConditionalForwarderRequestPrivate &other,
                                   DeleteConditionalForwarderRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteConditionalForwarderRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif

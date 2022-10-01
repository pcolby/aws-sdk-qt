// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONDITIONALFORWARDERREQUEST_P_H
#define QTAWS_UPDATECONDITIONALFORWARDERREQUEST_P_H

#include "directoryservicerequest_p.h"
#include "updateconditionalforwarderrequest.h"

namespace QtAws {
namespace DirectoryService {

class UpdateConditionalForwarderRequest;

class UpdateConditionalForwarderRequestPrivate : public DirectoryServiceRequestPrivate {

public:
    UpdateConditionalForwarderRequestPrivate(const DirectoryServiceRequest::Action action,
                                   UpdateConditionalForwarderRequest * const q);
    UpdateConditionalForwarderRequestPrivate(const UpdateConditionalForwarderRequestPrivate &other,
                                   UpdateConditionalForwarderRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateConditionalForwarderRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif

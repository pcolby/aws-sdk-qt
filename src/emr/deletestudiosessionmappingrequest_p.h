// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESTUDIOSESSIONMAPPINGREQUEST_P_H
#define QTAWS_DELETESTUDIOSESSIONMAPPINGREQUEST_P_H

#include "emrrequest_p.h"
#include "deletestudiosessionmappingrequest.h"

namespace QtAws {
namespace Emr {

class DeleteStudioSessionMappingRequest;

class DeleteStudioSessionMappingRequestPrivate : public EmrRequestPrivate {

public:
    DeleteStudioSessionMappingRequestPrivate(const EmrRequest::Action action,
                                   DeleteStudioSessionMappingRequest * const q);
    DeleteStudioSessionMappingRequestPrivate(const DeleteStudioSessionMappingRequestPrivate &other,
                                   DeleteStudioSessionMappingRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteStudioSessionMappingRequest)

};

} // namespace Emr
} // namespace QtAws

#endif

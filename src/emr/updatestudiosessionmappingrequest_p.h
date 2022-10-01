// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESTUDIOSESSIONMAPPINGREQUEST_P_H
#define QTAWS_UPDATESTUDIOSESSIONMAPPINGREQUEST_P_H

#include "emrrequest_p.h"
#include "updatestudiosessionmappingrequest.h"

namespace QtAws {
namespace Emr {

class UpdateStudioSessionMappingRequest;

class UpdateStudioSessionMappingRequestPrivate : public EmrRequestPrivate {

public:
    UpdateStudioSessionMappingRequestPrivate(const EmrRequest::Action action,
                                   UpdateStudioSessionMappingRequest * const q);
    UpdateStudioSessionMappingRequestPrivate(const UpdateStudioSessionMappingRequestPrivate &other,
                                   UpdateStudioSessionMappingRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateStudioSessionMappingRequest)

};

} // namespace Emr
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESTUDIOSESSIONMAPPINGREQUEST_P_H
#define QTAWS_CREATESTUDIOSESSIONMAPPINGREQUEST_P_H

#include "emrrequest_p.h"
#include "createstudiosessionmappingrequest.h"

namespace QtAws {
namespace Emr {

class CreateStudioSessionMappingRequest;

class CreateStudioSessionMappingRequestPrivate : public EmrRequestPrivate {

public:
    CreateStudioSessionMappingRequestPrivate(const EmrRequest::Action action,
                                   CreateStudioSessionMappingRequest * const q);
    CreateStudioSessionMappingRequestPrivate(const CreateStudioSessionMappingRequestPrivate &other,
                                   CreateStudioSessionMappingRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateStudioSessionMappingRequest)

};

} // namespace Emr
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTUDIOSESSIONMAPPINGREQUEST_P_H
#define QTAWS_GETSTUDIOSESSIONMAPPINGREQUEST_P_H

#include "emrrequest_p.h"
#include "getstudiosessionmappingrequest.h"

namespace QtAws {
namespace Emr {

class GetStudioSessionMappingRequest;

class GetStudioSessionMappingRequestPrivate : public EmrRequestPrivate {

public:
    GetStudioSessionMappingRequestPrivate(const EmrRequest::Action action,
                                   GetStudioSessionMappingRequest * const q);
    GetStudioSessionMappingRequestPrivate(const GetStudioSessionMappingRequestPrivate &other,
                                   GetStudioSessionMappingRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetStudioSessionMappingRequest)

};

} // namespace Emr
} // namespace QtAws

#endif

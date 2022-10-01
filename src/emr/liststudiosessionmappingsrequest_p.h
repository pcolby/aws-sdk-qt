// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTUDIOSESSIONMAPPINGSREQUEST_P_H
#define QTAWS_LISTSTUDIOSESSIONMAPPINGSREQUEST_P_H

#include "emrrequest_p.h"
#include "liststudiosessionmappingsrequest.h"

namespace QtAws {
namespace Emr {

class ListStudioSessionMappingsRequest;

class ListStudioSessionMappingsRequestPrivate : public EmrRequestPrivate {

public:
    ListStudioSessionMappingsRequestPrivate(const EmrRequest::Action action,
                                   ListStudioSessionMappingsRequest * const q);
    ListStudioSessionMappingsRequestPrivate(const ListStudioSessionMappingsRequestPrivate &other,
                                   ListStudioSessionMappingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListStudioSessionMappingsRequest)

};

} // namespace Emr
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPROJECTREQUEST_P_H
#define QTAWS_GETPROJECTREQUEST_P_H

#include "evidentlyrequest_p.h"
#include "getprojectrequest.h"

namespace QtAws {
namespace Evidently {

class GetProjectRequest;

class GetProjectRequestPrivate : public EvidentlyRequestPrivate {

public:
    GetProjectRequestPrivate(const EvidentlyRequest::Action action,
                                   GetProjectRequest * const q);
    GetProjectRequestPrivate(const GetProjectRequestPrivate &other,
                                   GetProjectRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetProjectRequest)

};

} // namespace Evidently
} // namespace QtAws

#endif

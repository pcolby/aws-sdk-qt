// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETRAILREQUEST_P_H
#define QTAWS_UPDATETRAILREQUEST_P_H

#include "cloudtrailrequest_p.h"
#include "updatetrailrequest.h"

namespace QtAws {
namespace CloudTrail {

class UpdateTrailRequest;

class UpdateTrailRequestPrivate : public CloudTrailRequestPrivate {

public:
    UpdateTrailRequestPrivate(const CloudTrailRequest::Action action,
                                   UpdateTrailRequest * const q);
    UpdateTrailRequestPrivate(const UpdateTrailRequestPrivate &other,
                                   UpdateTrailRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateTrailRequest)

};

} // namespace CloudTrail
} // namespace QtAws

#endif

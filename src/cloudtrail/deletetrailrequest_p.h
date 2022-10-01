// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRAILREQUEST_P_H
#define QTAWS_DELETETRAILREQUEST_P_H

#include "cloudtrailrequest_p.h"
#include "deletetrailrequest.h"

namespace QtAws {
namespace CloudTrail {

class DeleteTrailRequest;

class DeleteTrailRequestPrivate : public CloudTrailRequestPrivate {

public:
    DeleteTrailRequestPrivate(const CloudTrailRequest::Action action,
                                   DeleteTrailRequest * const q);
    DeleteTrailRequestPrivate(const DeleteTrailRequestPrivate &other,
                                   DeleteTrailRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteTrailRequest)

};

} // namespace CloudTrail
} // namespace QtAws

#endif

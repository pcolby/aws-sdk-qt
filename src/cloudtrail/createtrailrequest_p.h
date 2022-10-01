// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRAILREQUEST_P_H
#define QTAWS_CREATETRAILREQUEST_P_H

#include "cloudtrailrequest_p.h"
#include "createtrailrequest.h"

namespace QtAws {
namespace CloudTrail {

class CreateTrailRequest;

class CreateTrailRequestPrivate : public CloudTrailRequestPrivate {

public:
    CreateTrailRequestPrivate(const CloudTrailRequest::Action action,
                                   CreateTrailRequest * const q);
    CreateTrailRequestPrivate(const CreateTrailRequestPrivate &other,
                                   CreateTrailRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateTrailRequest)

};

} // namespace CloudTrail
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPIMPORTREQUEST_P_H
#define QTAWS_STOPIMPORTREQUEST_P_H

#include "cloudtrailrequest_p.h"
#include "stopimportrequest.h"

namespace QtAws {
namespace CloudTrail {

class StopImportRequest;

class StopImportRequestPrivate : public CloudTrailRequestPrivate {

public:
    StopImportRequestPrivate(const CloudTrailRequest::Action action,
                                   StopImportRequest * const q);
    StopImportRequestPrivate(const StopImportRequestPrivate &other,
                                   StopImportRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopImportRequest)

};

} // namespace CloudTrail
} // namespace QtAws

#endif

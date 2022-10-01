// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTREPORTCREATIONREQUEST_P_H
#define QTAWS_STARTREPORTCREATIONREQUEST_P_H

#include "resourcegroupstaggingrequest_p.h"
#include "startreportcreationrequest.h"

namespace QtAws {
namespace ResourceGroupsTagging {

class StartReportCreationRequest;

class StartReportCreationRequestPrivate : public ResourceGroupsTaggingRequestPrivate {

public:
    StartReportCreationRequestPrivate(const ResourceGroupsTaggingRequest::Action action,
                                   StartReportCreationRequest * const q);
    StartReportCreationRequestPrivate(const StartReportCreationRequestPrivate &other,
                                   StartReportCreationRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartReportCreationRequest)

};

} // namespace ResourceGroupsTagging
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTNODEFROMTEMPLATEJOBSREQUEST_P_H
#define QTAWS_LISTNODEFROMTEMPLATEJOBSREQUEST_P_H

#include "panoramarequest_p.h"
#include "listnodefromtemplatejobsrequest.h"

namespace QtAws {
namespace Panorama {

class ListNodeFromTemplateJobsRequest;

class ListNodeFromTemplateJobsRequestPrivate : public PanoramaRequestPrivate {

public:
    ListNodeFromTemplateJobsRequestPrivate(const PanoramaRequest::Action action,
                                   ListNodeFromTemplateJobsRequest * const q);
    ListNodeFromTemplateJobsRequestPrivate(const ListNodeFromTemplateJobsRequestPrivate &other,
                                   ListNodeFromTemplateJobsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListNodeFromTemplateJobsRequest)

};

} // namespace Panorama
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENODEFROMTEMPLATEJOBREQUEST_P_H
#define QTAWS_DESCRIBENODEFROMTEMPLATEJOBREQUEST_P_H

#include "panoramarequest_p.h"
#include "describenodefromtemplatejobrequest.h"

namespace QtAws {
namespace Panorama {

class DescribeNodeFromTemplateJobRequest;

class DescribeNodeFromTemplateJobRequestPrivate : public PanoramaRequestPrivate {

public:
    DescribeNodeFromTemplateJobRequestPrivate(const PanoramaRequest::Action action,
                                   DescribeNodeFromTemplateJobRequest * const q);
    DescribeNodeFromTemplateJobRequestPrivate(const DescribeNodeFromTemplateJobRequestPrivate &other,
                                   DescribeNodeFromTemplateJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeNodeFromTemplateJobRequest)

};

} // namespace Panorama
} // namespace QtAws

#endif

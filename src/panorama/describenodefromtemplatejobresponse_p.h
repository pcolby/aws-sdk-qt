// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENODEFROMTEMPLATEJOBRESPONSE_P_H
#define QTAWS_DESCRIBENODEFROMTEMPLATEJOBRESPONSE_P_H

#include "panoramaresponse_p.h"

namespace QtAws {
namespace Panorama {

class DescribeNodeFromTemplateJobResponse;

class DescribeNodeFromTemplateJobResponsePrivate : public PanoramaResponsePrivate {

public:

    explicit DescribeNodeFromTemplateJobResponsePrivate(DescribeNodeFromTemplateJobResponse * const q);

    void parseDescribeNodeFromTemplateJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeNodeFromTemplateJobResponse)
    Q_DISABLE_COPY(DescribeNodeFromTemplateJobResponsePrivate)

};

} // namespace Panorama
} // namespace QtAws

#endif

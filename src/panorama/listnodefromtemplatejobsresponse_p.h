// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTNODEFROMTEMPLATEJOBSRESPONSE_P_H
#define QTAWS_LISTNODEFROMTEMPLATEJOBSRESPONSE_P_H

#include "panoramaresponse_p.h"

namespace QtAws {
namespace Panorama {

class ListNodeFromTemplateJobsResponse;

class ListNodeFromTemplateJobsResponsePrivate : public PanoramaResponsePrivate {

public:

    explicit ListNodeFromTemplateJobsResponsePrivate(ListNodeFromTemplateJobsResponse * const q);

    void parseListNodeFromTemplateJobsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListNodeFromTemplateJobsResponse)
    Q_DISABLE_COPY(ListNodeFromTemplateJobsResponsePrivate)

};

} // namespace Panorama
} // namespace QtAws

#endif

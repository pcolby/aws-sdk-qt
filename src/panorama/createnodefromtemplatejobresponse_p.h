// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATENODEFROMTEMPLATEJOBRESPONSE_P_H
#define QTAWS_CREATENODEFROMTEMPLATEJOBRESPONSE_P_H

#include "panoramaresponse_p.h"

namespace QtAws {
namespace Panorama {

class CreateNodeFromTemplateJobResponse;

class CreateNodeFromTemplateJobResponsePrivate : public PanoramaResponsePrivate {

public:

    explicit CreateNodeFromTemplateJobResponsePrivate(CreateNodeFromTemplateJobResponse * const q);

    void parseCreateNodeFromTemplateJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateNodeFromTemplateJobResponse)
    Q_DISABLE_COPY(CreateNodeFromTemplateJobResponsePrivate)

};

} // namespace Panorama
} // namespace QtAws

#endif

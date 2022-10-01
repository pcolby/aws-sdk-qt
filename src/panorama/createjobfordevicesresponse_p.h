// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEJOBFORDEVICESRESPONSE_P_H
#define QTAWS_CREATEJOBFORDEVICESRESPONSE_P_H

#include "panoramaresponse_p.h"

namespace QtAws {
namespace Panorama {

class CreateJobForDevicesResponse;

class CreateJobForDevicesResponsePrivate : public PanoramaResponsePrivate {

public:

    explicit CreateJobForDevicesResponsePrivate(CreateJobForDevicesResponse * const q);

    void parseCreateJobForDevicesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateJobForDevicesResponse)
    Q_DISABLE_COPY(CreateJobForDevicesResponsePrivate)

};

} // namespace Panorama
} // namespace QtAws

#endif

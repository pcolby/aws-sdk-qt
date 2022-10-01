// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PANORAMARESPONSE_P_H
#define QTAWS_PANORAMARESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Panorama {

class PanoramaResponse;

class PanoramaResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit PanoramaResponsePrivate(PanoramaResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PanoramaResponse)
    Q_DISABLE_COPY(PanoramaResponsePrivate)

};

} // namespace Panorama
} // namespace QtAws

#endif

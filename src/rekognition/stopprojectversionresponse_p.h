// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPPROJECTVERSIONRESPONSE_P_H
#define QTAWS_STOPPROJECTVERSIONRESPONSE_P_H

#include "rekognitionresponse_p.h"

namespace QtAws {
namespace Rekognition {

class StopProjectVersionResponse;

class StopProjectVersionResponsePrivate : public RekognitionResponsePrivate {

public:

    explicit StopProjectVersionResponsePrivate(StopProjectVersionResponse * const q);

    void parseStopProjectVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopProjectVersionResponse)
    Q_DISABLE_COPY(StopProjectVersionResponsePrivate)

};

} // namespace Rekognition
} // namespace QtAws

#endif

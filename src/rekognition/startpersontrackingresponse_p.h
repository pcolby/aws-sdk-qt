// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTPERSONTRACKINGRESPONSE_P_H
#define QTAWS_STARTPERSONTRACKINGRESPONSE_P_H

#include "rekognitionresponse_p.h"

namespace QtAws {
namespace Rekognition {

class StartPersonTrackingResponse;

class StartPersonTrackingResponsePrivate : public RekognitionResponsePrivate {

public:

    explicit StartPersonTrackingResponsePrivate(StartPersonTrackingResponse * const q);

    void parseStartPersonTrackingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartPersonTrackingResponse)
    Q_DISABLE_COPY(StartPersonTrackingResponsePrivate)

};

} // namespace Rekognition
} // namespace QtAws

#endif

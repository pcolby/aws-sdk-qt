// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTPROJECTVERSIONRESPONSE_P_H
#define QTAWS_STARTPROJECTVERSIONRESPONSE_P_H

#include "rekognitionresponse_p.h"

namespace QtAws {
namespace Rekognition {

class StartProjectVersionResponse;

class StartProjectVersionResponsePrivate : public RekognitionResponsePrivate {

public:

    explicit StartProjectVersionResponsePrivate(StartProjectVersionResponse * const q);

    void parseStartProjectVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartProjectVersionResponse)
    Q_DISABLE_COPY(StartProjectVersionResponsePrivate)

};

} // namespace Rekognition
} // namespace QtAws

#endif

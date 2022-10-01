// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COPYPROJECTVERSIONRESPONSE_P_H
#define QTAWS_COPYPROJECTVERSIONRESPONSE_P_H

#include "rekognitionresponse_p.h"

namespace QtAws {
namespace Rekognition {

class CopyProjectVersionResponse;

class CopyProjectVersionResponsePrivate : public RekognitionResponsePrivate {

public:

    explicit CopyProjectVersionResponsePrivate(CopyProjectVersionResponse * const q);

    void parseCopyProjectVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CopyProjectVersionResponse)
    Q_DISABLE_COPY(CopyProjectVersionResponsePrivate)

};

} // namespace Rekognition
} // namespace QtAws

#endif

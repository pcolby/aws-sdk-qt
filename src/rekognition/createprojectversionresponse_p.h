// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPROJECTVERSIONRESPONSE_P_H
#define QTAWS_CREATEPROJECTVERSIONRESPONSE_P_H

#include "rekognitionresponse_p.h"

namespace QtAws {
namespace Rekognition {

class CreateProjectVersionResponse;

class CreateProjectVersionResponsePrivate : public RekognitionResponsePrivate {

public:

    explicit CreateProjectVersionResponsePrivate(CreateProjectVersionResponse * const q);

    void parseCreateProjectVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateProjectVersionResponse)
    Q_DISABLE_COPY(CreateProjectVersionResponsePrivate)

};

} // namespace Rekognition
} // namespace QtAws

#endif

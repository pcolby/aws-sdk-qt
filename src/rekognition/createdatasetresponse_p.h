// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDATASETRESPONSE_P_H
#define QTAWS_CREATEDATASETRESPONSE_P_H

#include "rekognitionresponse_p.h"

namespace QtAws {
namespace Rekognition {

class CreateDatasetResponse;

class CreateDatasetResponsePrivate : public RekognitionResponsePrivate {

public:

    explicit CreateDatasetResponsePrivate(CreateDatasetResponse * const q);

    void parseCreateDatasetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateDatasetResponse)
    Q_DISABLE_COPY(CreateDatasetResponsePrivate)

};

} // namespace Rekognition
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESTREAMPROCESSORRESPONSE_P_H
#define QTAWS_DELETESTREAMPROCESSORRESPONSE_P_H

#include "rekognitionresponse_p.h"

namespace QtAws {
namespace Rekognition {

class DeleteStreamProcessorResponse;

class DeleteStreamProcessorResponsePrivate : public RekognitionResponsePrivate {

public:

    explicit DeleteStreamProcessorResponsePrivate(DeleteStreamProcessorResponse * const q);

    void parseDeleteStreamProcessorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteStreamProcessorResponse)
    Q_DISABLE_COPY(DeleteStreamProcessorResponsePrivate)

};

} // namespace Rekognition
} // namespace QtAws

#endif

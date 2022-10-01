// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REKOGNITIONRESPONSE_P_H
#define QTAWS_REKOGNITIONRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Rekognition {

class RekognitionResponse;

class RekognitionResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit RekognitionResponsePrivate(RekognitionResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RekognitionResponse)
    Q_DISABLE_COPY(RekognitionResponsePrivate)

};

} // namespace Rekognition
} // namespace QtAws

#endif

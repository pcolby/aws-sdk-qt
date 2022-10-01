// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTTEXTDETECTIONRESPONSE_H
#define QTAWS_STARTTEXTDETECTIONRESPONSE_H

#include "rekognitionresponse.h"
#include "starttextdetectionrequest.h"

namespace QtAws {
namespace Rekognition {

class StartTextDetectionResponsePrivate;

class QTAWSREKOGNITION_EXPORT StartTextDetectionResponse : public RekognitionResponse {
    Q_OBJECT

public:
    StartTextDetectionResponse(const StartTextDetectionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartTextDetectionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartTextDetectionResponse)
    Q_DISABLE_COPY(StartTextDetectionResponse)

};

} // namespace Rekognition
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTLABELDETECTIONRESPONSE_H
#define QTAWS_STARTLABELDETECTIONRESPONSE_H

#include "rekognitionresponse.h"
#include "startlabeldetectionrequest.h"

namespace QtAws {
namespace Rekognition {

class StartLabelDetectionResponsePrivate;

class QTAWSREKOGNITION_EXPORT StartLabelDetectionResponse : public RekognitionResponse {
    Q_OBJECT

public:
    StartLabelDetectionResponse(const StartLabelDetectionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartLabelDetectionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartLabelDetectionResponse)
    Q_DISABLE_COPY(StartLabelDetectionResponse)

};

} // namespace Rekognition
} // namespace QtAws

#endif

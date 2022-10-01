// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTSTREAMPROCESSORRESPONSE_H
#define QTAWS_STARTSTREAMPROCESSORRESPONSE_H

#include "rekognitionresponse.h"
#include "startstreamprocessorrequest.h"

namespace QtAws {
namespace Rekognition {

class StartStreamProcessorResponsePrivate;

class QTAWSREKOGNITION_EXPORT StartStreamProcessorResponse : public RekognitionResponse {
    Q_OBJECT

public:
    StartStreamProcessorResponse(const StartStreamProcessorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartStreamProcessorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartStreamProcessorResponse)
    Q_DISABLE_COPY(StartStreamProcessorResponse)

};

} // namespace Rekognition
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTCELEBRITYRECOGNITIONRESPONSE_H
#define QTAWS_STARTCELEBRITYRECOGNITIONRESPONSE_H

#include "rekognitionresponse.h"
#include "startcelebrityrecognitionrequest.h"

namespace QtAws {
namespace Rekognition {

class StartCelebrityRecognitionResponsePrivate;

class QTAWSREKOGNITION_EXPORT StartCelebrityRecognitionResponse : public RekognitionResponse {
    Q_OBJECT

public:
    StartCelebrityRecognitionResponse(const StartCelebrityRecognitionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartCelebrityRecognitionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartCelebrityRecognitionResponse)
    Q_DISABLE_COPY(StartCelebrityRecognitionResponse)

};

} // namespace Rekognition
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCELEBRITYRECOGNITIONRESPONSE_H
#define QTAWS_GETCELEBRITYRECOGNITIONRESPONSE_H

#include "rekognitionresponse.h"
#include "getcelebrityrecognitionrequest.h"

namespace QtAws {
namespace Rekognition {

class GetCelebrityRecognitionResponsePrivate;

class QTAWSREKOGNITION_EXPORT GetCelebrityRecognitionResponse : public RekognitionResponse {
    Q_OBJECT

public:
    GetCelebrityRecognitionResponse(const GetCelebrityRecognitionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetCelebrityRecognitionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCelebrityRecognitionResponse)
    Q_DISABLE_COPY(GetCelebrityRecognitionResponse)

};

} // namespace Rekognition
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETECTTEXTRESPONSE_H
#define QTAWS_DETECTTEXTRESPONSE_H

#include "rekognitionresponse.h"
#include "detecttextrequest.h"

namespace QtAws {
namespace Rekognition {

class DetectTextResponsePrivate;

class QTAWSREKOGNITION_EXPORT DetectTextResponse : public RekognitionResponse {
    Q_OBJECT

public:
    DetectTextResponse(const DetectTextRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DetectTextRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DetectTextResponse)
    Q_DISABLE_COPY(DetectTextResponse)

};

} // namespace Rekognition
} // namespace QtAws

#endif

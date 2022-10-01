// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETECTLABELSRESPONSE_H
#define QTAWS_DETECTLABELSRESPONSE_H

#include "rekognitionresponse.h"
#include "detectlabelsrequest.h"

namespace QtAws {
namespace Rekognition {

class DetectLabelsResponsePrivate;

class QTAWSREKOGNITION_EXPORT DetectLabelsResponse : public RekognitionResponse {
    Q_OBJECT

public:
    DetectLabelsResponse(const DetectLabelsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DetectLabelsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DetectLabelsResponse)
    Q_DISABLE_COPY(DetectLabelsResponse)

};

} // namespace Rekognition
} // namespace QtAws

#endif

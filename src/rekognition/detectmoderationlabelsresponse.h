// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETECTMODERATIONLABELSRESPONSE_H
#define QTAWS_DETECTMODERATIONLABELSRESPONSE_H

#include "rekognitionresponse.h"
#include "detectmoderationlabelsrequest.h"

namespace QtAws {
namespace Rekognition {

class DetectModerationLabelsResponsePrivate;

class QTAWSREKOGNITION_EXPORT DetectModerationLabelsResponse : public RekognitionResponse {
    Q_OBJECT

public:
    DetectModerationLabelsResponse(const DetectModerationLabelsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DetectModerationLabelsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DetectModerationLabelsResponse)
    Q_DISABLE_COPY(DetectModerationLabelsResponse)

};

} // namespace Rekognition
} // namespace QtAws

#endif

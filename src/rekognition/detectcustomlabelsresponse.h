// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETECTCUSTOMLABELSRESPONSE_H
#define QTAWS_DETECTCUSTOMLABELSRESPONSE_H

#include "rekognitionresponse.h"
#include "detectcustomlabelsrequest.h"

namespace QtAws {
namespace Rekognition {

class DetectCustomLabelsResponsePrivate;

class QTAWSREKOGNITION_EXPORT DetectCustomLabelsResponse : public RekognitionResponse {
    Q_OBJECT

public:
    DetectCustomLabelsResponse(const DetectCustomLabelsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DetectCustomLabelsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DetectCustomLabelsResponse)
    Q_DISABLE_COPY(DetectCustomLabelsResponse)

};

} // namespace Rekognition
} // namespace QtAws

#endif

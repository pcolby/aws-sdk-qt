// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLABELDETECTIONRESPONSE_H
#define QTAWS_GETLABELDETECTIONRESPONSE_H

#include "rekognitionresponse.h"
#include "getlabeldetectionrequest.h"

namespace QtAws {
namespace Rekognition {

class GetLabelDetectionResponsePrivate;

class QTAWSREKOGNITION_EXPORT GetLabelDetectionResponse : public RekognitionResponse {
    Q_OBJECT

public:
    GetLabelDetectionResponse(const GetLabelDetectionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetLabelDetectionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetLabelDetectionResponse)
    Q_DISABLE_COPY(GetLabelDetectionResponse)

};

} // namespace Rekognition
} // namespace QtAws

#endif

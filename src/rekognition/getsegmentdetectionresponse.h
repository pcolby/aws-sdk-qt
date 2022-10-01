// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSEGMENTDETECTIONRESPONSE_H
#define QTAWS_GETSEGMENTDETECTIONRESPONSE_H

#include "rekognitionresponse.h"
#include "getsegmentdetectionrequest.h"

namespace QtAws {
namespace Rekognition {

class GetSegmentDetectionResponsePrivate;

class QTAWSREKOGNITION_EXPORT GetSegmentDetectionResponse : public RekognitionResponse {
    Q_OBJECT

public:
    GetSegmentDetectionResponse(const GetSegmentDetectionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSegmentDetectionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSegmentDetectionResponse)
    Q_DISABLE_COPY(GetSegmentDetectionResponse)

};

} // namespace Rekognition
} // namespace QtAws

#endif

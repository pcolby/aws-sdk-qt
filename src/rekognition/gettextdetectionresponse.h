// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTEXTDETECTIONRESPONSE_H
#define QTAWS_GETTEXTDETECTIONRESPONSE_H

#include "rekognitionresponse.h"
#include "gettextdetectionrequest.h"

namespace QtAws {
namespace Rekognition {

class GetTextDetectionResponsePrivate;

class QTAWSREKOGNITION_EXPORT GetTextDetectionResponse : public RekognitionResponse {
    Q_OBJECT

public:
    GetTextDetectionResponse(const GetTextDetectionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetTextDetectionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTextDetectionResponse)
    Q_DISABLE_COPY(GetTextDetectionResponse)

};

} // namespace Rekognition
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETECTFACESRESPONSE_H
#define QTAWS_DETECTFACESRESPONSE_H

#include "rekognitionresponse.h"
#include "detectfacesrequest.h"

namespace QtAws {
namespace Rekognition {

class DetectFacesResponsePrivate;

class QTAWSREKOGNITION_EXPORT DetectFacesResponse : public RekognitionResponse {
    Q_OBJECT

public:
    DetectFacesResponse(const DetectFacesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DetectFacesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DetectFacesResponse)
    Q_DISABLE_COPY(DetectFacesResponse)

};

} // namespace Rekognition
} // namespace QtAws

#endif

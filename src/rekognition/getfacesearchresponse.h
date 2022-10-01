// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFACESEARCHRESPONSE_H
#define QTAWS_GETFACESEARCHRESPONSE_H

#include "rekognitionresponse.h"
#include "getfacesearchrequest.h"

namespace QtAws {
namespace Rekognition {

class GetFaceSearchResponsePrivate;

class QTAWSREKOGNITION_EXPORT GetFaceSearchResponse : public RekognitionResponse {
    Q_OBJECT

public:
    GetFaceSearchResponse(const GetFaceSearchRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetFaceSearchRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetFaceSearchResponse)
    Q_DISABLE_COPY(GetFaceSearchResponse)

};

} // namespace Rekognition
} // namespace QtAws

#endif

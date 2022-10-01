// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHFACESBYIMAGERESPONSE_H
#define QTAWS_SEARCHFACESBYIMAGERESPONSE_H

#include "rekognitionresponse.h"
#include "searchfacesbyimagerequest.h"

namespace QtAws {
namespace Rekognition {

class SearchFacesByImageResponsePrivate;

class QTAWSREKOGNITION_EXPORT SearchFacesByImageResponse : public RekognitionResponse {
    Q_OBJECT

public:
    SearchFacesByImageResponse(const SearchFacesByImageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SearchFacesByImageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchFacesByImageResponse)
    Q_DISABLE_COPY(SearchFacesByImageResponse)

};

} // namespace Rekognition
} // namespace QtAws

#endif

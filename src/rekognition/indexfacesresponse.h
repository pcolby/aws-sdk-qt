// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INDEXFACESRESPONSE_H
#define QTAWS_INDEXFACESRESPONSE_H

#include "rekognitionresponse.h"
#include "indexfacesrequest.h"

namespace QtAws {
namespace Rekognition {

class IndexFacesResponsePrivate;

class QTAWSREKOGNITION_EXPORT IndexFacesResponse : public RekognitionResponse {
    Q_OBJECT

public:
    IndexFacesResponse(const IndexFacesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const IndexFacesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(IndexFacesResponse)
    Q_DISABLE_COPY(IndexFacesResponse)

};

} // namespace Rekognition
} // namespace QtAws

#endif

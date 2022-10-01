// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COMPAREFACESRESPONSE_H
#define QTAWS_COMPAREFACESRESPONSE_H

#include "rekognitionresponse.h"
#include "comparefacesrequest.h"

namespace QtAws {
namespace Rekognition {

class CompareFacesResponsePrivate;

class QTAWSREKOGNITION_EXPORT CompareFacesResponse : public RekognitionResponse {
    Q_OBJECT

public:
    CompareFacesResponse(const CompareFacesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CompareFacesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CompareFacesResponse)
    Q_DISABLE_COPY(CompareFacesResponse)

};

} // namespace Rekognition
} // namespace QtAws

#endif

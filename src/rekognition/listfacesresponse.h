// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFACESRESPONSE_H
#define QTAWS_LISTFACESRESPONSE_H

#include "rekognitionresponse.h"
#include "listfacesrequest.h"

namespace QtAws {
namespace Rekognition {

class ListFacesResponsePrivate;

class QTAWSREKOGNITION_EXPORT ListFacesResponse : public RekognitionResponse {
    Q_OBJECT

public:
    ListFacesResponse(const ListFacesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListFacesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFacesResponse)
    Q_DISABLE_COPY(ListFacesResponse)

};

} // namespace Rekognition
} // namespace QtAws

#endif

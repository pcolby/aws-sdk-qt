// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFACESRESPONSE_H
#define QTAWS_DELETEFACESRESPONSE_H

#include "rekognitionresponse.h"
#include "deletefacesrequest.h"

namespace QtAws {
namespace Rekognition {

class DeleteFacesResponsePrivate;

class QTAWSREKOGNITION_EXPORT DeleteFacesResponse : public RekognitionResponse {
    Q_OBJECT

public:
    DeleteFacesResponse(const DeleteFacesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteFacesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteFacesResponse)
    Q_DISABLE_COPY(DeleteFacesResponse)

};

} // namespace Rekognition
} // namespace QtAws

#endif

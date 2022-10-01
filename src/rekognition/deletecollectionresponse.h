// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECOLLECTIONRESPONSE_H
#define QTAWS_DELETECOLLECTIONRESPONSE_H

#include "rekognitionresponse.h"
#include "deletecollectionrequest.h"

namespace QtAws {
namespace Rekognition {

class DeleteCollectionResponsePrivate;

class QTAWSREKOGNITION_EXPORT DeleteCollectionResponse : public RekognitionResponse {
    Q_OBJECT

public:
    DeleteCollectionResponse(const DeleteCollectionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteCollectionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCollectionResponse)
    Q_DISABLE_COPY(DeleteCollectionResponse)

};

} // namespace Rekognition
} // namespace QtAws

#endif

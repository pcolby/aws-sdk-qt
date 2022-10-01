// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECOLLECTIONRESPONSE_H
#define QTAWS_CREATECOLLECTIONRESPONSE_H

#include "rekognitionresponse.h"
#include "createcollectionrequest.h"

namespace QtAws {
namespace Rekognition {

class CreateCollectionResponsePrivate;

class QTAWSREKOGNITION_EXPORT CreateCollectionResponse : public RekognitionResponse {
    Q_OBJECT

public:
    CreateCollectionResponse(const CreateCollectionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateCollectionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCollectionResponse)
    Q_DISABLE_COPY(CreateCollectionResponse)

};

} // namespace Rekognition
} // namespace QtAws

#endif

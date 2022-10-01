// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOLLECTIONSRESPONSE_H
#define QTAWS_LISTCOLLECTIONSRESPONSE_H

#include "rekognitionresponse.h"
#include "listcollectionsrequest.h"

namespace QtAws {
namespace Rekognition {

class ListCollectionsResponsePrivate;

class QTAWSREKOGNITION_EXPORT ListCollectionsResponse : public RekognitionResponse {
    Q_OBJECT

public:
    ListCollectionsResponse(const ListCollectionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListCollectionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCollectionsResponse)
    Q_DISABLE_COPY(ListCollectionsResponse)

};

} // namespace Rekognition
} // namespace QtAws

#endif

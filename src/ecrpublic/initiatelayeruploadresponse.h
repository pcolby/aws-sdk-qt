// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INITIATELAYERUPLOADRESPONSE_H
#define QTAWS_INITIATELAYERUPLOADRESPONSE_H

#include "ecrpublicresponse.h"
#include "initiatelayeruploadrequest.h"

namespace QtAws {
namespace EcrPublic {

class InitiateLayerUploadResponsePrivate;

class QTAWSECRPUBLIC_EXPORT InitiateLayerUploadResponse : public EcrPublicResponse {
    Q_OBJECT

public:
    InitiateLayerUploadResponse(const InitiateLayerUploadRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const InitiateLayerUploadRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(InitiateLayerUploadResponse)
    Q_DISABLE_COPY(InitiateLayerUploadResponse)

};

} // namespace EcrPublic
} // namespace QtAws

#endif

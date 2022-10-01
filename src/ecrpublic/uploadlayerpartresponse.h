// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPLOADLAYERPARTRESPONSE_H
#define QTAWS_UPLOADLAYERPARTRESPONSE_H

#include "ecrpublicresponse.h"
#include "uploadlayerpartrequest.h"

namespace QtAws {
namespace EcrPublic {

class UploadLayerPartResponsePrivate;

class QTAWSECRPUBLIC_EXPORT UploadLayerPartResponse : public EcrPublicResponse {
    Q_OBJECT

public:
    UploadLayerPartResponse(const UploadLayerPartRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UploadLayerPartRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UploadLayerPartResponse)
    Q_DISABLE_COPY(UploadLayerPartResponse)

};

} // namespace EcrPublic
} // namespace QtAws

#endif

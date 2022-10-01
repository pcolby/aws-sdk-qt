// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPLOADLAYERPARTRESPONSE_P_H
#define QTAWS_UPLOADLAYERPARTRESPONSE_P_H

#include "ecrresponse_p.h"

namespace QtAws {
namespace Ecr {

class UploadLayerPartResponse;

class UploadLayerPartResponsePrivate : public EcrResponsePrivate {

public:

    explicit UploadLayerPartResponsePrivate(UploadLayerPartResponse * const q);

    void parseUploadLayerPartResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UploadLayerPartResponse)
    Q_DISABLE_COPY(UploadLayerPartResponsePrivate)

};

} // namespace Ecr
} // namespace QtAws

#endif

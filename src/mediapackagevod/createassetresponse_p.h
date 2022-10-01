// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEASSETRESPONSE_P_H
#define QTAWS_CREATEASSETRESPONSE_P_H

#include "mediapackagevodresponse_p.h"

namespace QtAws {
namespace MediaPackageVod {

class CreateAssetResponse;

class CreateAssetResponsePrivate : public MediaPackageVodResponsePrivate {

public:

    explicit CreateAssetResponsePrivate(CreateAssetResponse * const q);

    void parseCreateAssetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateAssetResponse)
    Q_DISABLE_COPY(CreateAssetResponsePrivate)

};

} // namespace MediaPackageVod
} // namespace QtAws

#endif

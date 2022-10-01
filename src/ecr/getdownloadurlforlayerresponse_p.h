// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDOWNLOADURLFORLAYERRESPONSE_P_H
#define QTAWS_GETDOWNLOADURLFORLAYERRESPONSE_P_H

#include "ecrresponse_p.h"

namespace QtAws {
namespace Ecr {

class GetDownloadUrlForLayerResponse;

class GetDownloadUrlForLayerResponsePrivate : public EcrResponsePrivate {

public:

    explicit GetDownloadUrlForLayerResponsePrivate(GetDownloadUrlForLayerResponse * const q);

    void parseGetDownloadUrlForLayerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDownloadUrlForLayerResponse)
    Q_DISABLE_COPY(GetDownloadUrlForLayerResponsePrivate)

};

} // namespace Ecr
} // namespace QtAws

#endif

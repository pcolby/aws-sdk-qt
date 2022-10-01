// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEASSETRESPONSE_P_H
#define QTAWS_CREATEASSETRESPONSE_P_H

#include "iotsitewiseresponse_p.h"

namespace QtAws {
namespace IoTSiteWise {

class CreateAssetResponse;

class CreateAssetResponsePrivate : public IoTSiteWiseResponsePrivate {

public:

    explicit CreateAssetResponsePrivate(CreateAssetResponse * const q);

    void parseCreateAssetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateAssetResponse)
    Q_DISABLE_COPY(CreateAssetResponsePrivate)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif

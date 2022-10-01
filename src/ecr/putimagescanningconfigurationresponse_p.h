// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTIMAGESCANNINGCONFIGURATIONRESPONSE_P_H
#define QTAWS_PUTIMAGESCANNINGCONFIGURATIONRESPONSE_P_H

#include "ecrresponse_p.h"

namespace QtAws {
namespace Ecr {

class PutImageScanningConfigurationResponse;

class PutImageScanningConfigurationResponsePrivate : public EcrResponsePrivate {

public:

    explicit PutImageScanningConfigurationResponsePrivate(PutImageScanningConfigurationResponse * const q);

    void parsePutImageScanningConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutImageScanningConfigurationResponse)
    Q_DISABLE_COPY(PutImageScanningConfigurationResponsePrivate)

};

} // namespace Ecr
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTIMAGESCANRESPONSE_P_H
#define QTAWS_STARTIMAGESCANRESPONSE_P_H

#include "ecrresponse_p.h"

namespace QtAws {
namespace Ecr {

class StartImageScanResponse;

class StartImageScanResponsePrivate : public EcrResponsePrivate {

public:

    explicit StartImageScanResponsePrivate(StartImageScanResponse * const q);

    void parseStartImageScanResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartImageScanResponse)
    Q_DISABLE_COPY(StartImageScanResponsePrivate)

};

} // namespace Ecr
} // namespace QtAws

#endif

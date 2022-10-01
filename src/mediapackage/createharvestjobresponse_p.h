// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEHARVESTJOBRESPONSE_P_H
#define QTAWS_CREATEHARVESTJOBRESPONSE_P_H

#include "mediapackageresponse_p.h"

namespace QtAws {
namespace MediaPackage {

class CreateHarvestJobResponse;

class CreateHarvestJobResponsePrivate : public MediaPackageResponsePrivate {

public:

    explicit CreateHarvestJobResponsePrivate(CreateHarvestJobResponse * const q);

    void parseCreateHarvestJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateHarvestJobResponse)
    Q_DISABLE_COPY(CreateHarvestJobResponsePrivate)

};

} // namespace MediaPackage
} // namespace QtAws

#endif

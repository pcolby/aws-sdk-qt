// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEXPORTJOBRESPONSE_P_H
#define QTAWS_GETEXPORTJOBRESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class GetExportJobResponse;

class GetExportJobResponsePrivate : public PinpointResponsePrivate {

public:

    explicit GetExportJobResponsePrivate(GetExportJobResponse * const q);

    void parseGetExportJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetExportJobResponse)
    Q_DISABLE_COPY(GetExportJobResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIMPORTJOBRESPONSE_P_H
#define QTAWS_GETIMPORTJOBRESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class GetImportJobResponse;

class GetImportJobResponsePrivate : public PinpointResponsePrivate {

public:

    explicit GetImportJobResponsePrivate(GetImportJobResponse * const q);

    void parseGetImportJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetImportJobResponse)
    Q_DISABLE_COPY(GetImportJobResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif

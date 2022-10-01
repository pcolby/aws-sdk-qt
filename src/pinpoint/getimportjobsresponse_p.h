// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIMPORTJOBSRESPONSE_P_H
#define QTAWS_GETIMPORTJOBSRESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class GetImportJobsResponse;

class GetImportJobsResponsePrivate : public PinpointResponsePrivate {

public:

    explicit GetImportJobsResponsePrivate(GetImportJobsResponse * const q);

    void parseGetImportJobsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetImportJobsResponse)
    Q_DISABLE_COPY(GetImportJobsResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif

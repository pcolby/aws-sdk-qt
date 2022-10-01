// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPIMPORTRESPONSE_P_H
#define QTAWS_STOPIMPORTRESPONSE_P_H

#include "cloudtrailresponse_p.h"

namespace QtAws {
namespace CloudTrail {

class StopImportResponse;

class StopImportResponsePrivate : public CloudTrailResponsePrivate {

public:

    explicit StopImportResponsePrivate(StopImportResponse * const q);

    void parseStopImportResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopImportResponse)
    Q_DISABLE_COPY(StopImportResponsePrivate)

};

} // namespace CloudTrail
} // namespace QtAws

#endif

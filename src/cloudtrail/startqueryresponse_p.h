// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTQUERYRESPONSE_P_H
#define QTAWS_STARTQUERYRESPONSE_P_H

#include "cloudtrailresponse_p.h"

namespace QtAws {
namespace CloudTrail {

class StartQueryResponse;

class StartQueryResponsePrivate : public CloudTrailResponsePrivate {

public:

    explicit StartQueryResponsePrivate(StartQueryResponse * const q);

    void parseStartQueryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartQueryResponse)
    Q_DISABLE_COPY(StartQueryResponsePrivate)

};

} // namespace CloudTrail
} // namespace QtAws

#endif

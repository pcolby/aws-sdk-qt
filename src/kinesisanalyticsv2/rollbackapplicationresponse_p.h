// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ROLLBACKAPPLICATIONRESPONSE_P_H
#define QTAWS_ROLLBACKAPPLICATIONRESPONSE_P_H

#include "kinesisanalyticsv2response_p.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class RollbackApplicationResponse;

class RollbackApplicationResponsePrivate : public KinesisAnalyticsV2ResponsePrivate {

public:

    explicit RollbackApplicationResponsePrivate(RollbackApplicationResponse * const q);

    void parseRollbackApplicationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RollbackApplicationResponse)
    Q_DISABLE_COPY(RollbackApplicationResponsePrivate)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif

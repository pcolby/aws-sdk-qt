// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RETRYDATAREPLICATIONRESPONSE_P_H
#define QTAWS_RETRYDATAREPLICATIONRESPONSE_P_H

#include "drsresponse_p.h"

namespace QtAws {
namespace Drs {

class RetryDataReplicationResponse;

class RetryDataReplicationResponsePrivate : public DrsResponsePrivate {

public:

    explicit RetryDataReplicationResponsePrivate(RetryDataReplicationResponse * const q);

    void parseRetryDataReplicationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RetryDataReplicationResponse)
    Q_DISABLE_COPY(RetryDataReplicationResponsePrivate)

};

} // namespace Drs
} // namespace QtAws

#endif

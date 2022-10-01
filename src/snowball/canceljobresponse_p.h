// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELJOBRESPONSE_P_H
#define QTAWS_CANCELJOBRESPONSE_P_H

#include "snowballresponse_p.h"

namespace QtAws {
namespace Snowball {

class CancelJobResponse;

class CancelJobResponsePrivate : public SnowballResponsePrivate {

public:

    explicit CancelJobResponsePrivate(CancelJobResponse * const q);

    void parseCancelJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CancelJobResponse)
    Q_DISABLE_COPY(CancelJobResponsePrivate)

};

} // namespace Snowball
} // namespace QtAws

#endif

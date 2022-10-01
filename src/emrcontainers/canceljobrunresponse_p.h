// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELJOBRUNRESPONSE_P_H
#define QTAWS_CANCELJOBRUNRESPONSE_P_H

#include "emrcontainersresponse_p.h"

namespace QtAws {
namespace Emrcontainers {

class CancelJobRunResponse;

class CancelJobRunResponsePrivate : public EmrcontainersResponsePrivate {

public:

    explicit CancelJobRunResponsePrivate(CancelJobRunResponse * const q);

    void parseCancelJobRunResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CancelJobRunResponse)
    Q_DISABLE_COPY(CancelJobRunResponsePrivate)

};

} // namespace Emrcontainers
} // namespace QtAws

#endif

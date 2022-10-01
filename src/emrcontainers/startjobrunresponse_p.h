// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTJOBRUNRESPONSE_P_H
#define QTAWS_STARTJOBRUNRESPONSE_P_H

#include "emrcontainersresponse_p.h"

namespace QtAws {
namespace Emrcontainers {

class StartJobRunResponse;

class StartJobRunResponsePrivate : public EmrcontainersResponsePrivate {

public:

    explicit StartJobRunResponsePrivate(StartJobRunResponse * const q);

    void parseStartJobRunResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartJobRunResponse)
    Q_DISABLE_COPY(StartJobRunResponsePrivate)

};

} // namespace Emrcontainers
} // namespace QtAws

#endif

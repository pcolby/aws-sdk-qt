// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TERMINATEJOBRESPONSE_P_H
#define QTAWS_TERMINATEJOBRESPONSE_P_H

#include "batchresponse_p.h"

namespace QtAws {
namespace Batch {

class TerminateJobResponse;

class TerminateJobResponsePrivate : public BatchResponsePrivate {

public:

    explicit TerminateJobResponsePrivate(TerminateJobResponse * const q);

    void parseTerminateJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(TerminateJobResponse)
    Q_DISABLE_COPY(TerminateJobResponsePrivate)

};

} // namespace Batch
} // namespace QtAws

#endif

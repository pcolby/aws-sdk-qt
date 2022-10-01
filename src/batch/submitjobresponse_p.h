// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SUBMITJOBRESPONSE_P_H
#define QTAWS_SUBMITJOBRESPONSE_P_H

#include "batchresponse_p.h"

namespace QtAws {
namespace Batch {

class SubmitJobResponse;

class SubmitJobResponsePrivate : public BatchResponsePrivate {

public:

    explicit SubmitJobResponsePrivate(SubmitJobResponse * const q);

    void parseSubmitJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SubmitJobResponse)
    Q_DISABLE_COPY(SubmitJobResponsePrivate)

};

} // namespace Batch
} // namespace QtAws

#endif

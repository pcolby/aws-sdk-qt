// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETTRACESRESPONSE_P_H
#define QTAWS_BATCHGETTRACESRESPONSE_P_H

#include "xrayresponse_p.h"

namespace QtAws {
namespace XRay {

class BatchGetTracesResponse;

class BatchGetTracesResponsePrivate : public XRayResponsePrivate {

public:

    explicit BatchGetTracesResponsePrivate(BatchGetTracesResponse * const q);

    void parseBatchGetTracesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchGetTracesResponse)
    Q_DISABLE_COPY(BatchGetTracesResponsePrivate)

};

} // namespace XRay
} // namespace QtAws

#endif

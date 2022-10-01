// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHSUSPENDUSERRESPONSE_P_H
#define QTAWS_BATCHSUSPENDUSERRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class BatchSuspendUserResponse;

class BatchSuspendUserResponsePrivate : public ChimeResponsePrivate {

public:

    explicit BatchSuspendUserResponsePrivate(BatchSuspendUserResponse * const q);

    void parseBatchSuspendUserResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchSuspendUserResponse)
    Q_DISABLE_COPY(BatchSuspendUserResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDELETERESPONSE_P_H
#define QTAWS_BATCHDELETERESPONSE_P_H

#include "medialiveresponse_p.h"

namespace QtAws {
namespace MediaLive {

class BatchDeleteResponse;

class BatchDeleteResponsePrivate : public MediaLiveResponsePrivate {

public:

    explicit BatchDeleteResponsePrivate(BatchDeleteResponse * const q);

    void parseBatchDeleteResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchDeleteResponse)
    Q_DISABLE_COPY(BatchDeleteResponsePrivate)

};

} // namespace MediaLive
} // namespace QtAws

#endif

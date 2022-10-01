// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHUNSUSPENDUSERRESPONSE_P_H
#define QTAWS_BATCHUNSUSPENDUSERRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class BatchUnsuspendUserResponse;

class BatchUnsuspendUserResponsePrivate : public ChimeResponsePrivate {

public:

    explicit BatchUnsuspendUserResponsePrivate(BatchUnsuspendUserResponse * const q);

    void parseBatchUnsuspendUserResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchUnsuspendUserResponse)
    Q_DISABLE_COPY(BatchUnsuspendUserResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif

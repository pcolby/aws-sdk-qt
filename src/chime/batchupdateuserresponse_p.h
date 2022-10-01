// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHUPDATEUSERRESPONSE_P_H
#define QTAWS_BATCHUPDATEUSERRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class BatchUpdateUserResponse;

class BatchUpdateUserResponsePrivate : public ChimeResponsePrivate {

public:

    explicit BatchUpdateUserResponsePrivate(BatchUpdateUserResponse * const q);

    void parseBatchUpdateUserResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchUpdateUserResponse)
    Q_DISABLE_COPY(BatchUpdateUserResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif

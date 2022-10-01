// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHCREATEATTENDEERESPONSE_P_H
#define QTAWS_BATCHCREATEATTENDEERESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class BatchCreateAttendeeResponse;

class BatchCreateAttendeeResponsePrivate : public ChimeResponsePrivate {

public:

    explicit BatchCreateAttendeeResponsePrivate(BatchCreateAttendeeResponse * const q);

    void parseBatchCreateAttendeeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchCreateAttendeeResponse)
    Q_DISABLE_COPY(BatchCreateAttendeeResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif

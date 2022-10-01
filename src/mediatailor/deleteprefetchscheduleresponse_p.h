// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPREFETCHSCHEDULERESPONSE_P_H
#define QTAWS_DELETEPREFETCHSCHEDULERESPONSE_P_H

#include "mediatailorresponse_p.h"

namespace QtAws {
namespace MediaTailor {

class DeletePrefetchScheduleResponse;

class DeletePrefetchScheduleResponsePrivate : public MediaTailorResponsePrivate {

public:

    explicit DeletePrefetchScheduleResponsePrivate(DeletePrefetchScheduleResponse * const q);

    void parseDeletePrefetchScheduleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeletePrefetchScheduleResponse)
    Q_DISABLE_COPY(DeletePrefetchScheduleResponsePrivate)

};

} // namespace MediaTailor
} // namespace QtAws

#endif

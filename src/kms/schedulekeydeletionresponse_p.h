// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SCHEDULEKEYDELETIONRESPONSE_P_H
#define QTAWS_SCHEDULEKEYDELETIONRESPONSE_P_H

#include "kmsresponse_p.h"

namespace QtAws {
namespace Kms {

class ScheduleKeyDeletionResponse;

class ScheduleKeyDeletionResponsePrivate : public KmsResponsePrivate {

public:

    explicit ScheduleKeyDeletionResponsePrivate(ScheduleKeyDeletionResponse * const q);

    void parseScheduleKeyDeletionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ScheduleKeyDeletionResponse)
    Q_DISABLE_COPY(ScheduleKeyDeletionResponsePrivate)

};

} // namespace Kms
} // namespace QtAws

#endif

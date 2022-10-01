// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ARCHIVEFINDINGSRESPONSE_P_H
#define QTAWS_ARCHIVEFINDINGSRESPONSE_P_H

#include "guarddutyresponse_p.h"

namespace QtAws {
namespace GuardDuty {

class ArchiveFindingsResponse;

class ArchiveFindingsResponsePrivate : public GuardDutyResponsePrivate {

public:

    explicit ArchiveFindingsResponsePrivate(ArchiveFindingsResponse * const q);

    void parseArchiveFindingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ArchiveFindingsResponse)
    Q_DISABLE_COPY(ArchiveFindingsResponsePrivate)

};

} // namespace GuardDuty
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDELETIONPROTECTIONRESPONSE_P_H
#define QTAWS_UPDATEDELETIONPROTECTIONRESPONSE_P_H

#include "ssmincidentsresponse_p.h"

namespace QtAws {
namespace SsmIncidents {

class UpdateDeletionProtectionResponse;

class UpdateDeletionProtectionResponsePrivate : public SsmIncidentsResponsePrivate {

public:

    explicit UpdateDeletionProtectionResponsePrivate(UpdateDeletionProtectionResponse * const q);

    void parseUpdateDeletionProtectionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateDeletionProtectionResponse)
    Q_DISABLE_COPY(UpdateDeletionProtectionResponsePrivate)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif

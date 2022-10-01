// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTCRLRESPONSE_P_H
#define QTAWS_IMPORTCRLRESPONSE_P_H

#include "rolesanywhereresponse_p.h"

namespace QtAws {
namespace RolesAnywhere {

class ImportCrlResponse;

class ImportCrlResponsePrivate : public RolesAnywhereResponsePrivate {

public:

    explicit ImportCrlResponsePrivate(ImportCrlResponse * const q);

    void parseImportCrlResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ImportCrlResponse)
    Q_DISABLE_COPY(ImportCrlResponsePrivate)

};

} // namespace RolesAnywhere
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTLENSRESPONSE_P_H
#define QTAWS_IMPORTLENSRESPONSE_P_H

#include "wellarchitectedresponse_p.h"

namespace QtAws {
namespace WellArchitected {

class ImportLensResponse;

class ImportLensResponsePrivate : public WellArchitectedResponsePrivate {

public:

    explicit ImportLensResponsePrivate(ImportLensResponse * const q);

    void parseImportLensResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ImportLensResponse)
    Q_DISABLE_COPY(ImportLensResponsePrivate)

};

} // namespace WellArchitected
} // namespace QtAws

#endif

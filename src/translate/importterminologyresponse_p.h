// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTTERMINOLOGYRESPONSE_P_H
#define QTAWS_IMPORTTERMINOLOGYRESPONSE_P_H

#include "translateresponse_p.h"

namespace QtAws {
namespace Translate {

class ImportTerminologyResponse;

class ImportTerminologyResponsePrivate : public TranslateResponsePrivate {

public:

    explicit ImportTerminologyResponsePrivate(ImportTerminologyResponse * const q);

    void parseImportTerminologyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ImportTerminologyResponse)
    Q_DISABLE_COPY(ImportTerminologyResponsePrivate)

};

} // namespace Translate
} // namespace QtAws

#endif

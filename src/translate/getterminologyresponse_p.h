// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTERMINOLOGYRESPONSE_P_H
#define QTAWS_GETTERMINOLOGYRESPONSE_P_H

#include "translateresponse_p.h"

namespace QtAws {
namespace Translate {

class GetTerminologyResponse;

class GetTerminologyResponsePrivate : public TranslateResponsePrivate {

public:

    explicit GetTerminologyResponsePrivate(GetTerminologyResponse * const q);

    void parseGetTerminologyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetTerminologyResponse)
    Q_DISABLE_COPY(GetTerminologyResponsePrivate)

};

} // namespace Translate
} // namespace QtAws

#endif

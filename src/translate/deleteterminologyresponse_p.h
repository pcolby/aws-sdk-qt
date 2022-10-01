// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETERMINOLOGYRESPONSE_P_H
#define QTAWS_DELETETERMINOLOGYRESPONSE_P_H

#include "translateresponse_p.h"

namespace QtAws {
namespace Translate {

class DeleteTerminologyResponse;

class DeleteTerminologyResponsePrivate : public TranslateResponsePrivate {

public:

    explicit DeleteTerminologyResponsePrivate(DeleteTerminologyResponse * const q);

    void parseDeleteTerminologyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteTerminologyResponse)
    Q_DISABLE_COPY(DeleteTerminologyResponsePrivate)

};

} // namespace Translate
} // namespace QtAws

#endif

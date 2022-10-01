// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPROGRAMRESPONSE_P_H
#define QTAWS_CREATEPROGRAMRESPONSE_P_H

#include "mediatailorresponse_p.h"

namespace QtAws {
namespace MediaTailor {

class CreateProgramResponse;

class CreateProgramResponsePrivate : public MediaTailorResponsePrivate {

public:

    explicit CreateProgramResponsePrivate(CreateProgramResponse * const q);

    void parseCreateProgramResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateProgramResponse)
    Q_DISABLE_COPY(CreateProgramResponsePrivate)

};

} // namespace MediaTailor
} // namespace QtAws

#endif

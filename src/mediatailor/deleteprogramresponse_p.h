// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPROGRAMRESPONSE_P_H
#define QTAWS_DELETEPROGRAMRESPONSE_P_H

#include "mediatailorresponse_p.h"

namespace QtAws {
namespace MediaTailor {

class DeleteProgramResponse;

class DeleteProgramResponsePrivate : public MediaTailorResponsePrivate {

public:

    explicit DeleteProgramResponsePrivate(DeleteProgramResponse * const q);

    void parseDeleteProgramResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteProgramResponse)
    Q_DISABLE_COPY(DeleteProgramResponsePrivate)

};

} // namespace MediaTailor
} // namespace QtAws

#endif

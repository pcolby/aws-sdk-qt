// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVODSOURCERESPONSE_P_H
#define QTAWS_CREATEVODSOURCERESPONSE_P_H

#include "mediatailorresponse_p.h"

namespace QtAws {
namespace MediaTailor {

class CreateVodSourceResponse;

class CreateVodSourceResponsePrivate : public MediaTailorResponsePrivate {

public:

    explicit CreateVodSourceResponsePrivate(CreateVodSourceResponse * const q);

    void parseCreateVodSourceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateVodSourceResponse)
    Q_DISABLE_COPY(CreateVodSourceResponsePrivate)

};

} // namespace MediaTailor
} // namespace QtAws

#endif

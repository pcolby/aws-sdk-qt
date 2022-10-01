// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEVODSOURCERESPONSE_P_H
#define QTAWS_UPDATEVODSOURCERESPONSE_P_H

#include "mediatailorresponse_p.h"

namespace QtAws {
namespace MediaTailor {

class UpdateVodSourceResponse;

class UpdateVodSourceResponsePrivate : public MediaTailorResponsePrivate {

public:

    explicit UpdateVodSourceResponsePrivate(UpdateVodSourceResponse * const q);

    void parseUpdateVodSourceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateVodSourceResponse)
    Q_DISABLE_COPY(UpdateVodSourceResponsePrivate)

};

} // namespace MediaTailor
} // namespace QtAws

#endif

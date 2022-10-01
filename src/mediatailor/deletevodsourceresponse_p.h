// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVODSOURCERESPONSE_P_H
#define QTAWS_DELETEVODSOURCERESPONSE_P_H

#include "mediatailorresponse_p.h"

namespace QtAws {
namespace MediaTailor {

class DeleteVodSourceResponse;

class DeleteVodSourceResponsePrivate : public MediaTailorResponsePrivate {

public:

    explicit DeleteVodSourceResponsePrivate(DeleteVodSourceResponse * const q);

    void parseDeleteVodSourceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteVodSourceResponse)
    Q_DISABLE_COPY(DeleteVodSourceResponsePrivate)

};

} // namespace MediaTailor
} // namespace QtAws

#endif

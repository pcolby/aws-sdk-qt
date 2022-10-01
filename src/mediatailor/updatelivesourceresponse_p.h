// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELIVESOURCERESPONSE_P_H
#define QTAWS_UPDATELIVESOURCERESPONSE_P_H

#include "mediatailorresponse_p.h"

namespace QtAws {
namespace MediaTailor {

class UpdateLiveSourceResponse;

class UpdateLiveSourceResponsePrivate : public MediaTailorResponsePrivate {

public:

    explicit UpdateLiveSourceResponsePrivate(UpdateLiveSourceResponse * const q);

    void parseUpdateLiveSourceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateLiveSourceResponse)
    Q_DISABLE_COPY(UpdateLiveSourceResponsePrivate)

};

} // namespace MediaTailor
} // namespace QtAws

#endif

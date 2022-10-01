// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELIVESOURCERESPONSE_P_H
#define QTAWS_CREATELIVESOURCERESPONSE_P_H

#include "mediatailorresponse_p.h"

namespace QtAws {
namespace MediaTailor {

class CreateLiveSourceResponse;

class CreateLiveSourceResponsePrivate : public MediaTailorResponsePrivate {

public:

    explicit CreateLiveSourceResponsePrivate(CreateLiveSourceResponse * const q);

    void parseCreateLiveSourceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateLiveSourceResponse)
    Q_DISABLE_COPY(CreateLiveSourceResponsePrivate)

};

} // namespace MediaTailor
} // namespace QtAws

#endif

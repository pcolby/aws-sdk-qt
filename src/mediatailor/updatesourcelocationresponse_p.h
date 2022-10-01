// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESOURCELOCATIONRESPONSE_P_H
#define QTAWS_UPDATESOURCELOCATIONRESPONSE_P_H

#include "mediatailorresponse_p.h"

namespace QtAws {
namespace MediaTailor {

class UpdateSourceLocationResponse;

class UpdateSourceLocationResponsePrivate : public MediaTailorResponsePrivate {

public:

    explicit UpdateSourceLocationResponsePrivate(UpdateSourceLocationResponse * const q);

    void parseUpdateSourceLocationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateSourceLocationResponse)
    Q_DISABLE_COPY(UpdateSourceLocationResponsePrivate)

};

} // namespace MediaTailor
} // namespace QtAws

#endif

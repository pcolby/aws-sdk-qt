// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESOURCELOCATIONRESPONSE_P_H
#define QTAWS_CREATESOURCELOCATIONRESPONSE_P_H

#include "mediatailorresponse_p.h"

namespace QtAws {
namespace MediaTailor {

class CreateSourceLocationResponse;

class CreateSourceLocationResponsePrivate : public MediaTailorResponsePrivate {

public:

    explicit CreateSourceLocationResponsePrivate(CreateSourceLocationResponse * const q);

    void parseCreateSourceLocationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateSourceLocationResponse)
    Q_DISABLE_COPY(CreateSourceLocationResponsePrivate)

};

} // namespace MediaTailor
} // namespace QtAws

#endif

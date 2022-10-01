// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREGISTRIESRESPONSE_P_H
#define QTAWS_LISTREGISTRIESRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class ListRegistriesResponse;

class ListRegistriesResponsePrivate : public GlueResponsePrivate {

public:

    explicit ListRegistriesResponsePrivate(ListRegistriesResponse * const q);

    void parseListRegistriesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListRegistriesResponse)
    Q_DISABLE_COPY(ListRegistriesResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif

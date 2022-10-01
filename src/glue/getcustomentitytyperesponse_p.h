// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCUSTOMENTITYTYPERESPONSE_P_H
#define QTAWS_GETCUSTOMENTITYTYPERESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class GetCustomEntityTypeResponse;

class GetCustomEntityTypeResponsePrivate : public GlueResponsePrivate {

public:

    explicit GetCustomEntityTypeResponsePrivate(GetCustomEntityTypeResponse * const q);

    void parseGetCustomEntityTypeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetCustomEntityTypeResponse)
    Q_DISABLE_COPY(GetCustomEntityTypeResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif

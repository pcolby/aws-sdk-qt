// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCLASSIFIERSRESPONSE_P_H
#define QTAWS_GETCLASSIFIERSRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class GetClassifiersResponse;

class GetClassifiersResponsePrivate : public GlueResponsePrivate {

public:

    explicit GetClassifiersResponsePrivate(GetClassifiersResponse * const q);

    void parseGetClassifiersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetClassifiersResponse)
    Q_DISABLE_COPY(GetClassifiersResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif

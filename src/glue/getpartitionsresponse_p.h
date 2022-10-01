// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPARTITIONSRESPONSE_P_H
#define QTAWS_GETPARTITIONSRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class GetPartitionsResponse;

class GetPartitionsResponsePrivate : public GlueResponsePrivate {

public:

    explicit GetPartitionsResponsePrivate(GetPartitionsResponse * const q);

    void parseGetPartitionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetPartitionsResponse)
    Q_DISABLE_COPY(GetPartitionsResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif

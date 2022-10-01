// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPARTITIONRESPONSE_P_H
#define QTAWS_GETPARTITIONRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class GetPartitionResponse;

class GetPartitionResponsePrivate : public GlueResponsePrivate {

public:

    explicit GetPartitionResponsePrivate(GetPartitionResponse * const q);

    void parseGetPartitionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetPartitionResponse)
    Q_DISABLE_COPY(GetPartitionResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif

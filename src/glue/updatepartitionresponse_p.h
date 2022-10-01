// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPARTITIONRESPONSE_P_H
#define QTAWS_UPDATEPARTITIONRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class UpdatePartitionResponse;

class UpdatePartitionResponsePrivate : public GlueResponsePrivate {

public:

    explicit UpdatePartitionResponsePrivate(UpdatePartitionResponse * const q);

    void parseUpdatePartitionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdatePartitionResponse)
    Q_DISABLE_COPY(UpdatePartitionResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPARTITIONINDEXESRESPONSE_P_H
#define QTAWS_GETPARTITIONINDEXESRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class GetPartitionIndexesResponse;

class GetPartitionIndexesResponsePrivate : public GlueResponsePrivate {

public:

    explicit GetPartitionIndexesResponsePrivate(GetPartitionIndexesResponse * const q);

    void parseGetPartitionIndexesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetPartitionIndexesResponse)
    Q_DISABLE_COPY(GetPartitionIndexesResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif

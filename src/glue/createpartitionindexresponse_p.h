// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPARTITIONINDEXRESPONSE_P_H
#define QTAWS_CREATEPARTITIONINDEXRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class CreatePartitionIndexResponse;

class CreatePartitionIndexResponsePrivate : public GlueResponsePrivate {

public:

    explicit CreatePartitionIndexResponsePrivate(CreatePartitionIndexResponse * const q);

    void parseCreatePartitionIndexResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreatePartitionIndexResponse)
    Q_DISABLE_COPY(CreatePartitionIndexResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif

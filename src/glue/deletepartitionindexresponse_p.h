// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPARTITIONINDEXRESPONSE_P_H
#define QTAWS_DELETEPARTITIONINDEXRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class DeletePartitionIndexResponse;

class DeletePartitionIndexResponsePrivate : public GlueResponsePrivate {

public:

    explicit DeletePartitionIndexResponsePrivate(DeletePartitionIndexResponse * const q);

    void parseDeletePartitionIndexResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeletePartitionIndexResponse)
    Q_DISABLE_COPY(DeletePartitionIndexResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif

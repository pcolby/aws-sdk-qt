// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPARTITIONRESPONSE_P_H
#define QTAWS_DELETEPARTITIONRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class DeletePartitionResponse;

class DeletePartitionResponsePrivate : public GlueResponsePrivate {

public:

    explicit DeletePartitionResponsePrivate(DeletePartitionResponse * const q);

    void parseDeletePartitionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeletePartitionResponse)
    Q_DISABLE_COPY(DeletePartitionResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif

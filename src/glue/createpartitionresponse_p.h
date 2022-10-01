// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPARTITIONRESPONSE_P_H
#define QTAWS_CREATEPARTITIONRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class CreatePartitionResponse;

class CreatePartitionResponsePrivate : public GlueResponsePrivate {

public:

    explicit CreatePartitionResponsePrivate(CreatePartitionResponse * const q);

    void parseCreatePartitionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreatePartitionResponse)
    Q_DISABLE_COPY(CreatePartitionResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif

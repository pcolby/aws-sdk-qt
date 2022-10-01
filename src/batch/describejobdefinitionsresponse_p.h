// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEJOBDEFINITIONSRESPONSE_P_H
#define QTAWS_DESCRIBEJOBDEFINITIONSRESPONSE_P_H

#include "batchresponse_p.h"

namespace QtAws {
namespace Batch {

class DescribeJobDefinitionsResponse;

class DescribeJobDefinitionsResponsePrivate : public BatchResponsePrivate {

public:

    explicit DescribeJobDefinitionsResponsePrivate(DescribeJobDefinitionsResponse * const q);

    void parseDescribeJobDefinitionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeJobDefinitionsResponse)
    Q_DISABLE_COPY(DescribeJobDefinitionsResponsePrivate)

};

} // namespace Batch
} // namespace QtAws

#endif

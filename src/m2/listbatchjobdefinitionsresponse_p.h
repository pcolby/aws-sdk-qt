// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBATCHJOBDEFINITIONSRESPONSE_P_H
#define QTAWS_LISTBATCHJOBDEFINITIONSRESPONSE_P_H

#include "m2response_p.h"

namespace QtAws {
namespace M2 {

class ListBatchJobDefinitionsResponse;

class ListBatchJobDefinitionsResponsePrivate : public M2ResponsePrivate {

public:

    explicit ListBatchJobDefinitionsResponsePrivate(ListBatchJobDefinitionsResponse * const q);

    void parseListBatchJobDefinitionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListBatchJobDefinitionsResponse)
    Q_DISABLE_COPY(ListBatchJobDefinitionsResponsePrivate)

};

} // namespace M2
} // namespace QtAws

#endif

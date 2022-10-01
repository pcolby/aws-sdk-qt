// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBATCHJOBEXECUTIONSRESPONSE_P_H
#define QTAWS_LISTBATCHJOBEXECUTIONSRESPONSE_P_H

#include "m2response_p.h"

namespace QtAws {
namespace M2 {

class ListBatchJobExecutionsResponse;

class ListBatchJobExecutionsResponsePrivate : public M2ResponsePrivate {

public:

    explicit ListBatchJobExecutionsResponsePrivate(ListBatchJobExecutionsResponse * const q);

    void parseListBatchJobExecutionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListBatchJobExecutionsResponse)
    Q_DISABLE_COPY(ListBatchJobExecutionsResponsePrivate)

};

} // namespace M2
} // namespace QtAws

#endif

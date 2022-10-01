// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCLASSIFICATIONJOBSRESPONSE_P_H
#define QTAWS_LISTCLASSIFICATIONJOBSRESPONSE_P_H

#include "macie2response_p.h"

namespace QtAws {
namespace Macie2 {

class ListClassificationJobsResponse;

class ListClassificationJobsResponsePrivate : public Macie2ResponsePrivate {

public:

    explicit ListClassificationJobsResponsePrivate(ListClassificationJobsResponse * const q);

    void parseListClassificationJobsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListClassificationJobsResponse)
    Q_DISABLE_COPY(ListClassificationJobsResponsePrivate)

};

} // namespace Macie2
} // namespace QtAws

#endif

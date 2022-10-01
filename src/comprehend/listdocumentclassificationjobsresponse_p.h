// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDOCUMENTCLASSIFICATIONJOBSRESPONSE_P_H
#define QTAWS_LISTDOCUMENTCLASSIFICATIONJOBSRESPONSE_P_H

#include "comprehendresponse_p.h"

namespace QtAws {
namespace Comprehend {

class ListDocumentClassificationJobsResponse;

class ListDocumentClassificationJobsResponsePrivate : public ComprehendResponsePrivate {

public:

    explicit ListDocumentClassificationJobsResponsePrivate(ListDocumentClassificationJobsResponse * const q);

    void parseListDocumentClassificationJobsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDocumentClassificationJobsResponse)
    Q_DISABLE_COPY(ListDocumentClassificationJobsResponsePrivate)

};

} // namespace Comprehend
} // namespace QtAws

#endif

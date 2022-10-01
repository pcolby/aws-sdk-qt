// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTDOCUMENTCLASSIFICATIONJOBRESPONSE_P_H
#define QTAWS_STARTDOCUMENTCLASSIFICATIONJOBRESPONSE_P_H

#include "comprehendresponse_p.h"

namespace QtAws {
namespace Comprehend {

class StartDocumentClassificationJobResponse;

class StartDocumentClassificationJobResponsePrivate : public ComprehendResponsePrivate {

public:

    explicit StartDocumentClassificationJobResponsePrivate(StartDocumentClassificationJobResponse * const q);

    void parseStartDocumentClassificationJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartDocumentClassificationJobResponse)
    Q_DISABLE_COPY(StartDocumentClassificationJobResponsePrivate)

};

} // namespace Comprehend
} // namespace QtAws

#endif

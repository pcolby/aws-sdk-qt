// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPTRAININGDOCUMENTCLASSIFIERRESPONSE_P_H
#define QTAWS_STOPTRAININGDOCUMENTCLASSIFIERRESPONSE_P_H

#include "comprehendresponse_p.h"

namespace QtAws {
namespace Comprehend {

class StopTrainingDocumentClassifierResponse;

class StopTrainingDocumentClassifierResponsePrivate : public ComprehendResponsePrivate {

public:

    explicit StopTrainingDocumentClassifierResponsePrivate(StopTrainingDocumentClassifierResponse * const q);

    void parseStopTrainingDocumentClassifierResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopTrainingDocumentClassifierResponse)
    Q_DISABLE_COPY(StopTrainingDocumentClassifierResponsePrivate)

};

} // namespace Comprehend
} // namespace QtAws

#endif

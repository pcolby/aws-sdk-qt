// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEVALUATIONRESULTSRESPONSE_P_H
#define QTAWS_DELETEEVALUATIONRESULTSRESPONSE_P_H

#include "configserviceresponse_p.h"

namespace QtAws {
namespace ConfigService {

class DeleteEvaluationResultsResponse;

class DeleteEvaluationResultsResponsePrivate : public ConfigServiceResponsePrivate {

public:

    explicit DeleteEvaluationResultsResponsePrivate(DeleteEvaluationResultsResponse * const q);

    void parseDeleteEvaluationResultsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteEvaluationResultsResponse)
    Q_DISABLE_COPY(DeleteEvaluationResultsResponsePrivate)

};

} // namespace ConfigService
} // namespace QtAws

#endif

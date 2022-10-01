// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTMLEVALUATIONTASKRUNRESPONSE_H
#define QTAWS_STARTMLEVALUATIONTASKRUNRESPONSE_H

#include "glueresponse.h"
#include "startmlevaluationtaskrunrequest.h"

namespace QtAws {
namespace Glue {

class StartMLEvaluationTaskRunResponsePrivate;

class QTAWSGLUE_EXPORT StartMLEvaluationTaskRunResponse : public GlueResponse {
    Q_OBJECT

public:
    StartMLEvaluationTaskRunResponse(const StartMLEvaluationTaskRunRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartMLEvaluationTaskRunRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartMLEvaluationTaskRunResponse)
    Q_DISABLE_COPY(StartMLEvaluationTaskRunResponse)

};

} // namespace Glue
} // namespace QtAws

#endif

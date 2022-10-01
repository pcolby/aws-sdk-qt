// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTMLLABELINGSETGENERATIONTASKRUNRESPONSE_H
#define QTAWS_STARTMLLABELINGSETGENERATIONTASKRUNRESPONSE_H

#include "glueresponse.h"
#include "startmllabelingsetgenerationtaskrunrequest.h"

namespace QtAws {
namespace Glue {

class StartMLLabelingSetGenerationTaskRunResponsePrivate;

class QTAWSGLUE_EXPORT StartMLLabelingSetGenerationTaskRunResponse : public GlueResponse {
    Q_OBJECT

public:
    StartMLLabelingSetGenerationTaskRunResponse(const StartMLLabelingSetGenerationTaskRunRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartMLLabelingSetGenerationTaskRunRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartMLLabelingSetGenerationTaskRunResponse)
    Q_DISABLE_COPY(StartMLLabelingSetGenerationTaskRunResponse)

};

} // namespace Glue
} // namespace QtAws

#endif

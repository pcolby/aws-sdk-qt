// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPIPELINERESPONSE_H
#define QTAWS_CREATEPIPELINERESPONSE_H

#include "codepipelineresponse.h"
#include "createpipelinerequest.h"

namespace QtAws {
namespace CodePipeline {

class CreatePipelineResponsePrivate;

class QTAWSCODEPIPELINE_EXPORT CreatePipelineResponse : public CodePipelineResponse {
    Q_OBJECT

public:
    CreatePipelineResponse(const CreatePipelineRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreatePipelineRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePipelineResponse)
    Q_DISABLE_COPY(CreatePipelineResponse)

};

} // namespace CodePipeline
} // namespace QtAws

#endif

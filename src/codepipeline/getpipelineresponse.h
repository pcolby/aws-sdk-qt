// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPIPELINERESPONSE_H
#define QTAWS_GETPIPELINERESPONSE_H

#include "codepipelineresponse.h"
#include "getpipelinerequest.h"

namespace QtAws {
namespace CodePipeline {

class GetPipelineResponsePrivate;

class QTAWSCODEPIPELINE_EXPORT GetPipelineResponse : public CodePipelineResponse {
    Q_OBJECT

public:
    GetPipelineResponse(const GetPipelineRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetPipelineRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPipelineResponse)
    Q_DISABLE_COPY(GetPipelineResponse)

};

} // namespace CodePipeline
} // namespace QtAws

#endif

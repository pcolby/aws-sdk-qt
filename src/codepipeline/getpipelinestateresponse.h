// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPIPELINESTATERESPONSE_H
#define QTAWS_GETPIPELINESTATERESPONSE_H

#include "codepipelineresponse.h"
#include "getpipelinestaterequest.h"

namespace QtAws {
namespace CodePipeline {

class GetPipelineStateResponsePrivate;

class QTAWSCODEPIPELINE_EXPORT GetPipelineStateResponse : public CodePipelineResponse {
    Q_OBJECT

public:
    GetPipelineStateResponse(const GetPipelineStateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetPipelineStateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPipelineStateResponse)
    Q_DISABLE_COPY(GetPipelineStateResponse)

};

} // namespace CodePipeline
} // namespace QtAws

#endif

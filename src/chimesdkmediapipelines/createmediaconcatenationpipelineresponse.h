// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMEDIACONCATENATIONPIPELINERESPONSE_H
#define QTAWS_CREATEMEDIACONCATENATIONPIPELINERESPONSE_H

#include "chimesdkmediapipelinesresponse.h"
#include "createmediaconcatenationpipelinerequest.h"

namespace QtAws {
namespace ChimeSdkMediaPipelines {

class CreateMediaConcatenationPipelineResponsePrivate;

class QTAWSCHIMESDKMEDIAPIPELINES_EXPORT CreateMediaConcatenationPipelineResponse : public ChimeSdkMediaPipelinesResponse {
    Q_OBJECT

public:
    CreateMediaConcatenationPipelineResponse(const CreateMediaConcatenationPipelineRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateMediaConcatenationPipelineRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateMediaConcatenationPipelineResponse)
    Q_DISABLE_COPY(CreateMediaConcatenationPipelineResponse)

};

} // namespace ChimeSdkMediaPipelines
} // namespace QtAws

#endif

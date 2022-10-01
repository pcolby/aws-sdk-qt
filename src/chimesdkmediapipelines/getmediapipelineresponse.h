// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMEDIAPIPELINERESPONSE_H
#define QTAWS_GETMEDIAPIPELINERESPONSE_H

#include "chimesdkmediapipelinesresponse.h"
#include "getmediapipelinerequest.h"

namespace QtAws {
namespace ChimeSdkMediaPipelines {

class GetMediaPipelineResponsePrivate;

class QTAWSCHIMESDKMEDIAPIPELINES_EXPORT GetMediaPipelineResponse : public ChimeSdkMediaPipelinesResponse {
    Q_OBJECT

public:
    GetMediaPipelineResponse(const GetMediaPipelineRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetMediaPipelineRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMediaPipelineResponse)
    Q_DISABLE_COPY(GetMediaPipelineResponse)

};

} // namespace ChimeSdkMediaPipelines
} // namespace QtAws

#endif

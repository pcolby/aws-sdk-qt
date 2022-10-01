// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMEDIAPIPELINERESPONSE_H
#define QTAWS_DELETEMEDIAPIPELINERESPONSE_H

#include "chimesdkmediapipelinesresponse.h"
#include "deletemediapipelinerequest.h"

namespace QtAws {
namespace ChimeSdkMediaPipelines {

class DeleteMediaPipelineResponsePrivate;

class QTAWSCHIMESDKMEDIAPIPELINES_EXPORT DeleteMediaPipelineResponse : public ChimeSdkMediaPipelinesResponse {
    Q_OBJECT

public:
    DeleteMediaPipelineResponse(const DeleteMediaPipelineRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteMediaPipelineRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteMediaPipelineResponse)
    Q_DISABLE_COPY(DeleteMediaPipelineResponse)

};

} // namespace ChimeSdkMediaPipelines
} // namespace QtAws

#endif

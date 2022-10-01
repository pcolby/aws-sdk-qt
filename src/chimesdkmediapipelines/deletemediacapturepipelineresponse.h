// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMEDIACAPTUREPIPELINERESPONSE_H
#define QTAWS_DELETEMEDIACAPTUREPIPELINERESPONSE_H

#include "chimesdkmediapipelinesresponse.h"
#include "deletemediacapturepipelinerequest.h"

namespace QtAws {
namespace ChimeSdkMediaPipelines {

class DeleteMediaCapturePipelineResponsePrivate;

class QTAWSCHIMESDKMEDIAPIPELINES_EXPORT DeleteMediaCapturePipelineResponse : public ChimeSdkMediaPipelinesResponse {
    Q_OBJECT

public:
    DeleteMediaCapturePipelineResponse(const DeleteMediaCapturePipelineRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteMediaCapturePipelineRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteMediaCapturePipelineResponse)
    Q_DISABLE_COPY(DeleteMediaCapturePipelineResponse)

};

} // namespace ChimeSdkMediaPipelines
} // namespace QtAws

#endif

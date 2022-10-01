// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTIMAGEPIPELINEEXECUTIONRESPONSE_H
#define QTAWS_STARTIMAGEPIPELINEEXECUTIONRESPONSE_H

#include "imagebuilderresponse.h"
#include "startimagepipelineexecutionrequest.h"

namespace QtAws {
namespace ImageBuilder {

class StartImagePipelineExecutionResponsePrivate;

class QTAWSIMAGEBUILDER_EXPORT StartImagePipelineExecutionResponse : public ImageBuilderResponse {
    Q_OBJECT

public:
    StartImagePipelineExecutionResponse(const StartImagePipelineExecutionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartImagePipelineExecutionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartImagePipelineExecutionResponse)
    Q_DISABLE_COPY(StartImagePipelineExecutionResponse)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif

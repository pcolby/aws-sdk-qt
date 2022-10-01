// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLESTAGETRANSITIONRESPONSE_H
#define QTAWS_ENABLESTAGETRANSITIONRESPONSE_H

#include "codepipelineresponse.h"
#include "enablestagetransitionrequest.h"

namespace QtAws {
namespace CodePipeline {

class EnableStageTransitionResponsePrivate;

class QTAWSCODEPIPELINE_EXPORT EnableStageTransitionResponse : public CodePipelineResponse {
    Q_OBJECT

public:
    EnableStageTransitionResponse(const EnableStageTransitionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const EnableStageTransitionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableStageTransitionResponse)
    Q_DISABLE_COPY(EnableStageTransitionResponse)

};

} // namespace CodePipeline
} // namespace QtAws

#endif

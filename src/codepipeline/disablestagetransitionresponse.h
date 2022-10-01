// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLESTAGETRANSITIONRESPONSE_H
#define QTAWS_DISABLESTAGETRANSITIONRESPONSE_H

#include "codepipelineresponse.h"
#include "disablestagetransitionrequest.h"

namespace QtAws {
namespace CodePipeline {

class DisableStageTransitionResponsePrivate;

class QTAWSCODEPIPELINE_EXPORT DisableStageTransitionResponse : public CodePipelineResponse {
    Q_OBJECT

public:
    DisableStageTransitionResponse(const DisableStageTransitionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisableStageTransitionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableStageTransitionResponse)
    Q_DISABLE_COPY(DisableStageTransitionResponse)

};

} // namespace CodePipeline
} // namespace QtAws

#endif

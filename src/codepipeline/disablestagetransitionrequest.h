// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLESTAGETRANSITIONREQUEST_H
#define QTAWS_DISABLESTAGETRANSITIONREQUEST_H

#include "codepipelinerequest.h"

namespace QtAws {
namespace CodePipeline {

class DisableStageTransitionRequestPrivate;

class QTAWSCODEPIPELINE_EXPORT DisableStageTransitionRequest : public CodePipelineRequest {

public:
    DisableStageTransitionRequest(const DisableStageTransitionRequest &other);
    DisableStageTransitionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableStageTransitionRequest)

};

} // namespace CodePipeline
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLESTAGETRANSITIONREQUEST_H
#define QTAWS_ENABLESTAGETRANSITIONREQUEST_H

#include "codepipelinerequest.h"

namespace QtAws {
namespace CodePipeline {

class EnableStageTransitionRequestPrivate;

class QTAWSCODEPIPELINE_EXPORT EnableStageTransitionRequest : public CodePipelineRequest {

public:
    EnableStageTransitionRequest(const EnableStageTransitionRequest &other);
    EnableStageTransitionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableStageTransitionRequest)

};

} // namespace CodePipeline
} // namespace QtAws

#endif

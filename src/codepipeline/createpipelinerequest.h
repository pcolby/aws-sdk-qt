// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPIPELINEREQUEST_H
#define QTAWS_CREATEPIPELINEREQUEST_H

#include "codepipelinerequest.h"

namespace QtAws {
namespace CodePipeline {

class CreatePipelineRequestPrivate;

class QTAWSCODEPIPELINE_EXPORT CreatePipelineRequest : public CodePipelineRequest {

public:
    CreatePipelineRequest(const CreatePipelineRequest &other);
    CreatePipelineRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePipelineRequest)

};

} // namespace CodePipeline
} // namespace QtAws

#endif

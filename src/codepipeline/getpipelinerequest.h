// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPIPELINEREQUEST_H
#define QTAWS_GETPIPELINEREQUEST_H

#include "codepipelinerequest.h"

namespace QtAws {
namespace CodePipeline {

class GetPipelineRequestPrivate;

class QTAWSCODEPIPELINE_EXPORT GetPipelineRequest : public CodePipelineRequest {

public:
    GetPipelineRequest(const GetPipelineRequest &other);
    GetPipelineRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPipelineRequest)

};

} // namespace CodePipeline
} // namespace QtAws

#endif

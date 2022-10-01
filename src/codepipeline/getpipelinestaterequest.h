// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPIPELINESTATEREQUEST_H
#define QTAWS_GETPIPELINESTATEREQUEST_H

#include "codepipelinerequest.h"

namespace QtAws {
namespace CodePipeline {

class GetPipelineStateRequestPrivate;

class QTAWSCODEPIPELINE_EXPORT GetPipelineStateRequest : public CodePipelineRequest {

public:
    GetPipelineStateRequest(const GetPipelineStateRequest &other);
    GetPipelineStateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPipelineStateRequest)

};

} // namespace CodePipeline
} // namespace QtAws

#endif

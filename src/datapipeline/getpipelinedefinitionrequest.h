// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPIPELINEDEFINITIONREQUEST_H
#define QTAWS_GETPIPELINEDEFINITIONREQUEST_H

#include "datapipelinerequest.h"

namespace QtAws {
namespace DataPipeline {

class GetPipelineDefinitionRequestPrivate;

class QTAWSDATAPIPELINE_EXPORT GetPipelineDefinitionRequest : public DataPipelineRequest {

public:
    GetPipelineDefinitionRequest(const GetPipelineDefinitionRequest &other);
    GetPipelineDefinitionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPipelineDefinitionRequest)

};

} // namespace DataPipeline
} // namespace QtAws

#endif

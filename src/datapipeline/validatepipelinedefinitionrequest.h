// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VALIDATEPIPELINEDEFINITIONREQUEST_H
#define QTAWS_VALIDATEPIPELINEDEFINITIONREQUEST_H

#include "datapipelinerequest.h"

namespace QtAws {
namespace DataPipeline {

class ValidatePipelineDefinitionRequestPrivate;

class QTAWSDATAPIPELINE_EXPORT ValidatePipelineDefinitionRequest : public DataPipelineRequest {

public:
    ValidatePipelineDefinitionRequest(const ValidatePipelineDefinitionRequest &other);
    ValidatePipelineDefinitionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ValidatePipelineDefinitionRequest)

};

} // namespace DataPipeline
} // namespace QtAws

#endif

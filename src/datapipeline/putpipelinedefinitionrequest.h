// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTPIPELINEDEFINITIONREQUEST_H
#define QTAWS_PUTPIPELINEDEFINITIONREQUEST_H

#include "datapipelinerequest.h"

namespace QtAws {
namespace DataPipeline {

class PutPipelineDefinitionRequestPrivate;

class QTAWSDATAPIPELINE_EXPORT PutPipelineDefinitionRequest : public DataPipelineRequest {

public:
    PutPipelineDefinitionRequest(const PutPipelineDefinitionRequest &other);
    PutPipelineDefinitionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutPipelineDefinitionRequest)

};

} // namespace DataPipeline
} // namespace QtAws

#endif

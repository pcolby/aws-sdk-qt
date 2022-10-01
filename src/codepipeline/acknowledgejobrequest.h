// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACKNOWLEDGEJOBREQUEST_H
#define QTAWS_ACKNOWLEDGEJOBREQUEST_H

#include "codepipelinerequest.h"

namespace QtAws {
namespace CodePipeline {

class AcknowledgeJobRequestPrivate;

class QTAWSCODEPIPELINE_EXPORT AcknowledgeJobRequest : public CodePipelineRequest {

public:
    AcknowledgeJobRequest(const AcknowledgeJobRequest &other);
    AcknowledgeJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AcknowledgeJobRequest)

};

} // namespace CodePipeline
} // namespace QtAws

#endif

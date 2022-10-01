// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACKNOWLEDGETHIRDPARTYJOBREQUEST_H
#define QTAWS_ACKNOWLEDGETHIRDPARTYJOBREQUEST_H

#include "codepipelinerequest.h"

namespace QtAws {
namespace CodePipeline {

class AcknowledgeThirdPartyJobRequestPrivate;

class QTAWSCODEPIPELINE_EXPORT AcknowledgeThirdPartyJobRequest : public CodePipelineRequest {

public:
    AcknowledgeThirdPartyJobRequest(const AcknowledgeThirdPartyJobRequest &other);
    AcknowledgeThirdPartyJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AcknowledgeThirdPartyJobRequest)

};

} // namespace CodePipeline
} // namespace QtAws

#endif

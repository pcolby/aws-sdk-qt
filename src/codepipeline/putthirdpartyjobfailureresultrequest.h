// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTTHIRDPARTYJOBFAILURERESULTREQUEST_H
#define QTAWS_PUTTHIRDPARTYJOBFAILURERESULTREQUEST_H

#include "codepipelinerequest.h"

namespace QtAws {
namespace CodePipeline {

class PutThirdPartyJobFailureResultRequestPrivate;

class QTAWSCODEPIPELINE_EXPORT PutThirdPartyJobFailureResultRequest : public CodePipelineRequest {

public:
    PutThirdPartyJobFailureResultRequest(const PutThirdPartyJobFailureResultRequest &other);
    PutThirdPartyJobFailureResultRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutThirdPartyJobFailureResultRequest)

};

} // namespace CodePipeline
} // namespace QtAws

#endif

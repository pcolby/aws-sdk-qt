// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTTHIRDPARTYJOBSUCCESSRESULTREQUEST_H
#define QTAWS_PUTTHIRDPARTYJOBSUCCESSRESULTREQUEST_H

#include "codepipelinerequest.h"

namespace QtAws {
namespace CodePipeline {

class PutThirdPartyJobSuccessResultRequestPrivate;

class QTAWSCODEPIPELINE_EXPORT PutThirdPartyJobSuccessResultRequest : public CodePipelineRequest {

public:
    PutThirdPartyJobSuccessResultRequest(const PutThirdPartyJobSuccessResultRequest &other);
    PutThirdPartyJobSuccessResultRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutThirdPartyJobSuccessResultRequest)

};

} // namespace CodePipeline
} // namespace QtAws

#endif

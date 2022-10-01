// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTHIRDPARTYJOBDETAILSREQUEST_H
#define QTAWS_GETTHIRDPARTYJOBDETAILSREQUEST_H

#include "codepipelinerequest.h"

namespace QtAws {
namespace CodePipeline {

class GetThirdPartyJobDetailsRequestPrivate;

class QTAWSCODEPIPELINE_EXPORT GetThirdPartyJobDetailsRequest : public CodePipelineRequest {

public:
    GetThirdPartyJobDetailsRequest(const GetThirdPartyJobDetailsRequest &other);
    GetThirdPartyJobDetailsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetThirdPartyJobDetailsRequest)

};

} // namespace CodePipeline
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTAPPROVALRESULTREQUEST_H
#define QTAWS_PUTAPPROVALRESULTREQUEST_H

#include "codepipelinerequest.h"

namespace QtAws {
namespace CodePipeline {

class PutApprovalResultRequestPrivate;

class QTAWSCODEPIPELINE_EXPORT PutApprovalResultRequest : public CodePipelineRequest {

public:
    PutApprovalResultRequest(const PutApprovalResultRequest &other);
    PutApprovalResultRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutApprovalResultRequest)

};

} // namespace CodePipeline
} // namespace QtAws

#endif

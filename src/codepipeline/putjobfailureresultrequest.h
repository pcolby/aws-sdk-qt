// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTJOBFAILURERESULTREQUEST_H
#define QTAWS_PUTJOBFAILURERESULTREQUEST_H

#include "codepipelinerequest.h"

namespace QtAws {
namespace CodePipeline {

class PutJobFailureResultRequestPrivate;

class QTAWSCODEPIPELINE_EXPORT PutJobFailureResultRequest : public CodePipelineRequest {

public:
    PutJobFailureResultRequest(const PutJobFailureResultRequest &other);
    PutJobFailureResultRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutJobFailureResultRequest)

};

} // namespace CodePipeline
} // namespace QtAws

#endif

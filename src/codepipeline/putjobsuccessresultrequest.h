// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTJOBSUCCESSRESULTREQUEST_H
#define QTAWS_PUTJOBSUCCESSRESULTREQUEST_H

#include "codepipelinerequest.h"

namespace QtAws {
namespace CodePipeline {

class PutJobSuccessResultRequestPrivate;

class QTAWSCODEPIPELINE_EXPORT PutJobSuccessResultRequest : public CodePipelineRequest {

public:
    PutJobSuccessResultRequest(const PutJobSuccessResultRequest &other);
    PutJobSuccessResultRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutJobSuccessResultRequest)

};

} // namespace CodePipeline
} // namespace QtAws

#endif

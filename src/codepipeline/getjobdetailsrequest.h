// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETJOBDETAILSREQUEST_H
#define QTAWS_GETJOBDETAILSREQUEST_H

#include "codepipelinerequest.h"

namespace QtAws {
namespace CodePipeline {

class GetJobDetailsRequestPrivate;

class QTAWSCODEPIPELINE_EXPORT GetJobDetailsRequest : public CodePipelineRequest {

public:
    GetJobDetailsRequest(const GetJobDetailsRequest &other);
    GetJobDetailsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetJobDetailsRequest)

};

} // namespace CodePipeline
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACTIONTYPEREQUEST_H
#define QTAWS_GETACTIONTYPEREQUEST_H

#include "codepipelinerequest.h"

namespace QtAws {
namespace CodePipeline {

class GetActionTypeRequestPrivate;

class QTAWSCODEPIPELINE_EXPORT GetActionTypeRequest : public CodePipelineRequest {

public:
    GetActionTypeRequest(const GetActionTypeRequest &other);
    GetActionTypeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetActionTypeRequest)

};

} // namespace CodePipeline
} // namespace QtAws

#endif

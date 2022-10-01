// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECUSTOMACTIONTYPEREQUEST_H
#define QTAWS_CREATECUSTOMACTIONTYPEREQUEST_H

#include "codepipelinerequest.h"

namespace QtAws {
namespace CodePipeline {

class CreateCustomActionTypeRequestPrivate;

class QTAWSCODEPIPELINE_EXPORT CreateCustomActionTypeRequest : public CodePipelineRequest {

public:
    CreateCustomActionTypeRequest(const CreateCustomActionTypeRequest &other);
    CreateCustomActionTypeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCustomActionTypeRequest)

};

} // namespace CodePipeline
} // namespace QtAws

#endif

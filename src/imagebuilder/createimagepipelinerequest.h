// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEIMAGEPIPELINEREQUEST_H
#define QTAWS_CREATEIMAGEPIPELINEREQUEST_H

#include "imagebuilderrequest.h"

namespace QtAws {
namespace ImageBuilder {

class CreateImagePipelineRequestPrivate;

class QTAWSIMAGEBUILDER_EXPORT CreateImagePipelineRequest : public ImageBuilderRequest {

public:
    CreateImagePipelineRequest(const CreateImagePipelineRequest &other);
    CreateImagePipelineRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateImagePipelineRequest)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif

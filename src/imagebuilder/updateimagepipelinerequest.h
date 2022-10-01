// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEIMAGEPIPELINEREQUEST_H
#define QTAWS_UPDATEIMAGEPIPELINEREQUEST_H

#include "imagebuilderrequest.h"

namespace QtAws {
namespace ImageBuilder {

class UpdateImagePipelineRequestPrivate;

class QTAWSIMAGEBUILDER_EXPORT UpdateImagePipelineRequest : public ImageBuilderRequest {

public:
    UpdateImagePipelineRequest(const UpdateImagePipelineRequest &other);
    UpdateImagePipelineRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateImagePipelineRequest)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif

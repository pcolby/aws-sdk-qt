// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEIMAGEPIPELINEREQUEST_H
#define QTAWS_DELETEIMAGEPIPELINEREQUEST_H

#include "imagebuilderrequest.h"

namespace QtAws {
namespace ImageBuilder {

class DeleteImagePipelineRequestPrivate;

class QTAWSIMAGEBUILDER_EXPORT DeleteImagePipelineRequest : public ImageBuilderRequest {

public:
    DeleteImagePipelineRequest(const DeleteImagePipelineRequest &other);
    DeleteImagePipelineRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteImagePipelineRequest)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif

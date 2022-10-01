// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIMAGEPIPELINEREQUEST_H
#define QTAWS_GETIMAGEPIPELINEREQUEST_H

#include "imagebuilderrequest.h"

namespace QtAws {
namespace ImageBuilder {

class GetImagePipelineRequestPrivate;

class QTAWSIMAGEBUILDER_EXPORT GetImagePipelineRequest : public ImageBuilderRequest {

public:
    GetImagePipelineRequest(const GetImagePipelineRequest &other);
    GetImagePipelineRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetImagePipelineRequest)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif

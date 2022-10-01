// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIMAGEPIPELINEIMAGESREQUEST_H
#define QTAWS_LISTIMAGEPIPELINEIMAGESREQUEST_H

#include "imagebuilderrequest.h"

namespace QtAws {
namespace ImageBuilder {

class ListImagePipelineImagesRequestPrivate;

class QTAWSIMAGEBUILDER_EXPORT ListImagePipelineImagesRequest : public ImageBuilderRequest {

public:
    ListImagePipelineImagesRequest(const ListImagePipelineImagesRequest &other);
    ListImagePipelineImagesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListImagePipelineImagesRequest)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif

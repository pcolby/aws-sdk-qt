// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIMAGEPIPELINEIMAGESRESPONSE_H
#define QTAWS_LISTIMAGEPIPELINEIMAGESRESPONSE_H

#include "imagebuilderresponse.h"
#include "listimagepipelineimagesrequest.h"

namespace QtAws {
namespace ImageBuilder {

class ListImagePipelineImagesResponsePrivate;

class QTAWSIMAGEBUILDER_EXPORT ListImagePipelineImagesResponse : public ImageBuilderResponse {
    Q_OBJECT

public:
    ListImagePipelineImagesResponse(const ListImagePipelineImagesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListImagePipelineImagesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListImagePipelineImagesResponse)
    Q_DISABLE_COPY(ListImagePipelineImagesResponse)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif

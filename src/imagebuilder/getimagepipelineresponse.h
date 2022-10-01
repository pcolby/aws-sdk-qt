// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIMAGEPIPELINERESPONSE_H
#define QTAWS_GETIMAGEPIPELINERESPONSE_H

#include "imagebuilderresponse.h"
#include "getimagepipelinerequest.h"

namespace QtAws {
namespace ImageBuilder {

class GetImagePipelineResponsePrivate;

class QTAWSIMAGEBUILDER_EXPORT GetImagePipelineResponse : public ImageBuilderResponse {
    Q_OBJECT

public:
    GetImagePipelineResponse(const GetImagePipelineRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetImagePipelineRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetImagePipelineResponse)
    Q_DISABLE_COPY(GetImagePipelineResponse)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif

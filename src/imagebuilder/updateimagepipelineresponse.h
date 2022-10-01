// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEIMAGEPIPELINERESPONSE_H
#define QTAWS_UPDATEIMAGEPIPELINERESPONSE_H

#include "imagebuilderresponse.h"
#include "updateimagepipelinerequest.h"

namespace QtAws {
namespace ImageBuilder {

class UpdateImagePipelineResponsePrivate;

class QTAWSIMAGEBUILDER_EXPORT UpdateImagePipelineResponse : public ImageBuilderResponse {
    Q_OBJECT

public:
    UpdateImagePipelineResponse(const UpdateImagePipelineRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateImagePipelineRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateImagePipelineResponse)
    Q_DISABLE_COPY(UpdateImagePipelineResponse)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif

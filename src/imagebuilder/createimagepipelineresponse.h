// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEIMAGEPIPELINERESPONSE_H
#define QTAWS_CREATEIMAGEPIPELINERESPONSE_H

#include "imagebuilderresponse.h"
#include "createimagepipelinerequest.h"

namespace QtAws {
namespace ImageBuilder {

class CreateImagePipelineResponsePrivate;

class QTAWSIMAGEBUILDER_EXPORT CreateImagePipelineResponse : public ImageBuilderResponse {
    Q_OBJECT

public:
    CreateImagePipelineResponse(const CreateImagePipelineRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateImagePipelineRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateImagePipelineResponse)
    Q_DISABLE_COPY(CreateImagePipelineResponse)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif

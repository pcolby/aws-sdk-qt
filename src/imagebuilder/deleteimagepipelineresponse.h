// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEIMAGEPIPELINERESPONSE_H
#define QTAWS_DELETEIMAGEPIPELINERESPONSE_H

#include "imagebuilderresponse.h"
#include "deleteimagepipelinerequest.h"

namespace QtAws {
namespace ImageBuilder {

class DeleteImagePipelineResponsePrivate;

class QTAWSIMAGEBUILDER_EXPORT DeleteImagePipelineResponse : public ImageBuilderResponse {
    Q_OBJECT

public:
    DeleteImagePipelineResponse(const DeleteImagePipelineRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteImagePipelineRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteImagePipelineResponse)
    Q_DISABLE_COPY(DeleteImagePipelineResponse)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif

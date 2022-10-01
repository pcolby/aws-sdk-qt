// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTIMAGEPIPELINEEXECUTIONREQUEST_H
#define QTAWS_STARTIMAGEPIPELINEEXECUTIONREQUEST_H

#include "imagebuilderrequest.h"

namespace QtAws {
namespace ImageBuilder {

class StartImagePipelineExecutionRequestPrivate;

class QTAWSIMAGEBUILDER_EXPORT StartImagePipelineExecutionRequest : public ImageBuilderRequest {

public:
    StartImagePipelineExecutionRequest(const StartImagePipelineExecutionRequest &other);
    StartImagePipelineExecutionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartImagePipelineExecutionRequest)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif

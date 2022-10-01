// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEACTIVATEPIPELINEREQUEST_H
#define QTAWS_DEACTIVATEPIPELINEREQUEST_H

#include "datapipelinerequest.h"

namespace QtAws {
namespace DataPipeline {

class DeactivatePipelineRequestPrivate;

class QTAWSDATAPIPELINE_EXPORT DeactivatePipelineRequest : public DataPipelineRequest {

public:
    DeactivatePipelineRequest(const DeactivatePipelineRequest &other);
    DeactivatePipelineRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeactivatePipelineRequest)

};

} // namespace DataPipeline
} // namespace QtAws

#endif

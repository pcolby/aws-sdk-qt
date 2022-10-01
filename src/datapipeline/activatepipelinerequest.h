// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACTIVATEPIPELINEREQUEST_H
#define QTAWS_ACTIVATEPIPELINEREQUEST_H

#include "datapipelinerequest.h"

namespace QtAws {
namespace DataPipeline {

class ActivatePipelineRequestPrivate;

class QTAWSDATAPIPELINE_EXPORT ActivatePipelineRequest : public DataPipelineRequest {

public:
    ActivatePipelineRequest(const ActivatePipelineRequest &other);
    ActivatePipelineRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ActivatePipelineRequest)

};

} // namespace DataPipeline
} // namespace QtAws

#endif

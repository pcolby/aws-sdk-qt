// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPIPELINESREQUEST_H
#define QTAWS_DESCRIBEPIPELINESREQUEST_H

#include "datapipelinerequest.h"

namespace QtAws {
namespace DataPipeline {

class DescribePipelinesRequestPrivate;

class QTAWSDATAPIPELINE_EXPORT DescribePipelinesRequest : public DataPipelineRequest {

public:
    DescribePipelinesRequest(const DescribePipelinesRequest &other);
    DescribePipelinesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePipelinesRequest)

};

} // namespace DataPipeline
} // namespace QtAws

#endif

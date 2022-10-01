// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPIPELINESREQUEST_P_H
#define QTAWS_DESCRIBEPIPELINESREQUEST_P_H

#include "datapipelinerequest_p.h"
#include "describepipelinesrequest.h"

namespace QtAws {
namespace DataPipeline {

class DescribePipelinesRequest;

class DescribePipelinesRequestPrivate : public DataPipelineRequestPrivate {

public:
    DescribePipelinesRequestPrivate(const DataPipelineRequest::Action action,
                                   DescribePipelinesRequest * const q);
    DescribePipelinesRequestPrivate(const DescribePipelinesRequestPrivate &other,
                                   DescribePipelinesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribePipelinesRequest)

};

} // namespace DataPipeline
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_POLLFORTASKREQUEST_H
#define QTAWS_POLLFORTASKREQUEST_H

#include "datapipelinerequest.h"

namespace QtAws {
namespace DataPipeline {

class PollForTaskRequestPrivate;

class QTAWSDATAPIPELINE_EXPORT PollForTaskRequest : public DataPipelineRequest {

public:
    PollForTaskRequest(const PollForTaskRequest &other);
    PollForTaskRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PollForTaskRequest)

};

} // namespace DataPipeline
} // namespace QtAws

#endif

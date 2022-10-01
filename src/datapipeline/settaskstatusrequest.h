// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETTASKSTATUSREQUEST_H
#define QTAWS_SETTASKSTATUSREQUEST_H

#include "datapipelinerequest.h"

namespace QtAws {
namespace DataPipeline {

class SetTaskStatusRequestPrivate;

class QTAWSDATAPIPELINE_EXPORT SetTaskStatusRequest : public DataPipelineRequest {

public:
    SetTaskStatusRequest(const SetTaskStatusRequest &other);
    SetTaskStatusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetTaskStatusRequest)

};

} // namespace DataPipeline
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETSTATUSREQUEST_H
#define QTAWS_SETSTATUSREQUEST_H

#include "datapipelinerequest.h"

namespace QtAws {
namespace DataPipeline {

class SetStatusRequestPrivate;

class QTAWSDATAPIPELINE_EXPORT SetStatusRequest : public DataPipelineRequest {

public:
    SetStatusRequest(const SetStatusRequest &other);
    SetStatusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetStatusRequest)

};

} // namespace DataPipeline
} // namespace QtAws

#endif

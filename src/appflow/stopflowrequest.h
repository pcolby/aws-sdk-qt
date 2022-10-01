// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPFLOWREQUEST_H
#define QTAWS_STOPFLOWREQUEST_H

#include "appflowrequest.h"

namespace QtAws {
namespace Appflow {

class StopFlowRequestPrivate;

class QTAWSAPPFLOW_EXPORT StopFlowRequest : public AppflowRequest {

public:
    StopFlowRequest(const StopFlowRequest &other);
    StopFlowRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopFlowRequest)

};

} // namespace Appflow
} // namespace QtAws

#endif

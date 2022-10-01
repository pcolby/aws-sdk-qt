// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFLOWREQUEST_H
#define QTAWS_CREATEFLOWREQUEST_H

#include "appflowrequest.h"

namespace QtAws {
namespace Appflow {

class CreateFlowRequestPrivate;

class QTAWSAPPFLOW_EXPORT CreateFlowRequest : public AppflowRequest {

public:
    CreateFlowRequest(const CreateFlowRequest &other);
    CreateFlowRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateFlowRequest)

};

} // namespace Appflow
} // namespace QtAws

#endif

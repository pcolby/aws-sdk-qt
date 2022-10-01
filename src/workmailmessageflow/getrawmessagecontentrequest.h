// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRAWMESSAGECONTENTREQUEST_H
#define QTAWS_GETRAWMESSAGECONTENTREQUEST_H

#include "workmailmessageflowrequest.h"

namespace QtAws {
namespace WorkMailMessageFlow {

class GetRawMessageContentRequestPrivate;

class QTAWSWORKMAILMESSAGEFLOW_EXPORT GetRawMessageContentRequest : public WorkMailMessageFlowRequest {

public:
    GetRawMessageContentRequest(const GetRawMessageContentRequest &other);
    GetRawMessageContentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRawMessageContentRequest)

};

} // namespace WorkMailMessageFlow
} // namespace QtAws

#endif

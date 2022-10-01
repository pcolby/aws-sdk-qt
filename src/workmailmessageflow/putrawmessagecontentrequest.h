// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTRAWMESSAGECONTENTREQUEST_H
#define QTAWS_PUTRAWMESSAGECONTENTREQUEST_H

#include "workmailmessageflowrequest.h"

namespace QtAws {
namespace WorkMailMessageFlow {

class PutRawMessageContentRequestPrivate;

class QTAWSWORKMAILMESSAGEFLOW_EXPORT PutRawMessageContentRequest : public WorkMailMessageFlowRequest {

public:
    PutRawMessageContentRequest(const PutRawMessageContentRequest &other);
    PutRawMessageContentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutRawMessageContentRequest)

};

} // namespace WorkMailMessageFlow
} // namespace QtAws

#endif

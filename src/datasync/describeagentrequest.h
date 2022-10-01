// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAGENTREQUEST_H
#define QTAWS_DESCRIBEAGENTREQUEST_H

#include "datasyncrequest.h"

namespace QtAws {
namespace DataSync {

class DescribeAgentRequestPrivate;

class QTAWSDATASYNC_EXPORT DescribeAgentRequest : public DataSyncRequest {

public:
    DescribeAgentRequest(const DescribeAgentRequest &other);
    DescribeAgentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAgentRequest)

};

} // namespace DataSync
} // namespace QtAws

#endif

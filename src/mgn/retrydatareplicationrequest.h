// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RETRYDATAREPLICATIONREQUEST_H
#define QTAWS_RETRYDATAREPLICATIONREQUEST_H

#include "mgnrequest.h"

namespace QtAws {
namespace Mgn {

class RetryDataReplicationRequestPrivate;

class QTAWSMGN_EXPORT RetryDataReplicationRequest : public MgnRequest {

public:
    RetryDataReplicationRequest(const RetryDataReplicationRequest &other);
    RetryDataReplicationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RetryDataReplicationRequest)

};

} // namespace Mgn
} // namespace QtAws

#endif

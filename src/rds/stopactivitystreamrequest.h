// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPACTIVITYSTREAMREQUEST_H
#define QTAWS_STOPACTIVITYSTREAMREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class StopActivityStreamRequestPrivate;

class QTAWSRDS_EXPORT StopActivityStreamRequest : public RdsRequest {

public:
    StopActivityStreamRequest(const StopActivityStreamRequest &other);
    StopActivityStreamRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopActivityStreamRequest)

};

} // namespace Rds
} // namespace QtAws

#endif

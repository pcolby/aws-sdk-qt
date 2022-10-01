// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTACTIVITYSTREAMREQUEST_H
#define QTAWS_STARTACTIVITYSTREAMREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class StartActivityStreamRequestPrivate;

class QTAWSRDS_EXPORT StartActivityStreamRequest : public RdsRequest {

public:
    StartActivityStreamRequest(const StartActivityStreamRequest &other);
    StartActivityStreamRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartActivityStreamRequest)

};

} // namespace Rds
} // namespace QtAws

#endif

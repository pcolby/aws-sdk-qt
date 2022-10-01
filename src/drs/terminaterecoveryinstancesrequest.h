// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TERMINATERECOVERYINSTANCESREQUEST_H
#define QTAWS_TERMINATERECOVERYINSTANCESREQUEST_H

#include "drsrequest.h"

namespace QtAws {
namespace Drs {

class TerminateRecoveryInstancesRequestPrivate;

class QTAWSDRS_EXPORT TerminateRecoveryInstancesRequest : public DrsRequest {

public:
    TerminateRecoveryInstancesRequest(const TerminateRecoveryInstancesRequest &other);
    TerminateRecoveryInstancesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TerminateRecoveryInstancesRequest)

};

} // namespace Drs
} // namespace QtAws

#endif

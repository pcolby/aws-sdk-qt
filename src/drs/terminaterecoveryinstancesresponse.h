// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TERMINATERECOVERYINSTANCESRESPONSE_H
#define QTAWS_TERMINATERECOVERYINSTANCESRESPONSE_H

#include "drsresponse.h"
#include "terminaterecoveryinstancesrequest.h"

namespace QtAws {
namespace Drs {

class TerminateRecoveryInstancesResponsePrivate;

class QTAWSDRS_EXPORT TerminateRecoveryInstancesResponse : public DrsResponse {
    Q_OBJECT

public:
    TerminateRecoveryInstancesResponse(const TerminateRecoveryInstancesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const TerminateRecoveryInstancesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TerminateRecoveryInstancesResponse)
    Q_DISABLE_COPY(TerminateRecoveryInstancesResponse)

};

} // namespace Drs
} // namespace QtAws

#endif

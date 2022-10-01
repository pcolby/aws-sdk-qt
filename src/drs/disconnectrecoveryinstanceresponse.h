// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISCONNECTRECOVERYINSTANCERESPONSE_H
#define QTAWS_DISCONNECTRECOVERYINSTANCERESPONSE_H

#include "drsresponse.h"
#include "disconnectrecoveryinstancerequest.h"

namespace QtAws {
namespace Drs {

class DisconnectRecoveryInstanceResponsePrivate;

class QTAWSDRS_EXPORT DisconnectRecoveryInstanceResponse : public DrsResponse {
    Q_OBJECT

public:
    DisconnectRecoveryInstanceResponse(const DisconnectRecoveryInstanceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisconnectRecoveryInstanceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisconnectRecoveryInstanceResponse)
    Q_DISABLE_COPY(DisconnectRecoveryInstanceResponse)

};

} // namespace Drs
} // namespace QtAws

#endif

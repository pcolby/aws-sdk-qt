// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTRECOVERYRESPONSE_H
#define QTAWS_STARTRECOVERYRESPONSE_H

#include "drsresponse.h"
#include "startrecoveryrequest.h"

namespace QtAws {
namespace Drs {

class StartRecoveryResponsePrivate;

class QTAWSDRS_EXPORT StartRecoveryResponse : public DrsResponse {
    Q_OBJECT

public:
    StartRecoveryResponse(const StartRecoveryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartRecoveryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartRecoveryResponse)
    Q_DISABLE_COPY(StartRecoveryResponse)

};

} // namespace Drs
} // namespace QtAws

#endif

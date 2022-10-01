// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONNECTIONSTATUSRESPONSE_H
#define QTAWS_GETCONNECTIONSTATUSRESPONSE_H

#include "ssmresponse.h"
#include "getconnectionstatusrequest.h"

namespace QtAws {
namespace Ssm {

class GetConnectionStatusResponsePrivate;

class QTAWSSSM_EXPORT GetConnectionStatusResponse : public SsmResponse {
    Q_OBJECT

public:
    GetConnectionStatusResponse(const GetConnectionStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetConnectionStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetConnectionStatusResponse)
    Q_DISABLE_COPY(GetConnectionStatusResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif

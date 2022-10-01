// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPROTECTIONSTATUSRESPONSE_H
#define QTAWS_GETPROTECTIONSTATUSRESPONSE_H

#include "fmsresponse.h"
#include "getprotectionstatusrequest.h"

namespace QtAws {
namespace Fms {

class GetProtectionStatusResponsePrivate;

class QTAWSFMS_EXPORT GetProtectionStatusResponse : public FmsResponse {
    Q_OBJECT

public:
    GetProtectionStatusResponse(const GetProtectionStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetProtectionStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetProtectionStatusResponse)
    Q_DISABLE_COPY(GetProtectionStatusResponse)

};

} // namespace Fms
} // namespace QtAws

#endif

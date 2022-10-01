// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCHANGETOKENSTATUSRESPONSE_H
#define QTAWS_GETCHANGETOKENSTATUSRESPONSE_H

#include "wafresponse.h"
#include "getchangetokenstatusrequest.h"

namespace QtAws {
namespace Waf {

class GetChangeTokenStatusResponsePrivate;

class QTAWSWAF_EXPORT GetChangeTokenStatusResponse : public WafResponse {
    Q_OBJECT

public:
    GetChangeTokenStatusResponse(const GetChangeTokenStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetChangeTokenStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetChangeTokenStatusResponse)
    Q_DISABLE_COPY(GetChangeTokenStatusResponse)

};

} // namespace Waf
} // namespace QtAws

#endif

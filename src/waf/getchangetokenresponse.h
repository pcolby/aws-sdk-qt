// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCHANGETOKENRESPONSE_H
#define QTAWS_GETCHANGETOKENRESPONSE_H

#include "wafresponse.h"
#include "getchangetokenrequest.h"

namespace QtAws {
namespace Waf {

class GetChangeTokenResponsePrivate;

class QTAWSWAF_EXPORT GetChangeTokenResponse : public WafResponse {
    Q_OBJECT

public:
    GetChangeTokenResponse(const GetChangeTokenRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetChangeTokenRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetChangeTokenResponse)
    Q_DISABLE_COPY(GetChangeTokenResponse)

};

} // namespace Waf
} // namespace QtAws

#endif

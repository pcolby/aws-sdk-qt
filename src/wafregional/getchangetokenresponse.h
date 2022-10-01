// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCHANGETOKENRESPONSE_H
#define QTAWS_GETCHANGETOKENRESPONSE_H

#include "wafregionalresponse.h"
#include "getchangetokenrequest.h"

namespace QtAws {
namespace WafRegional {

class GetChangeTokenResponsePrivate;

class QTAWSWAFREGIONAL_EXPORT GetChangeTokenResponse : public WafRegionalResponse {
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

} // namespace WafRegional
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIPSETRESPONSE_H
#define QTAWS_GETIPSETRESPONSE_H

#include "wafresponse.h"
#include "getipsetrequest.h"

namespace QtAws {
namespace Waf {

class GetIPSetResponsePrivate;

class QTAWSWAF_EXPORT GetIPSetResponse : public WafResponse {
    Q_OBJECT

public:
    GetIPSetResponse(const GetIPSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetIPSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetIPSetResponse)
    Q_DISABLE_COPY(GetIPSetResponse)

};

} // namespace Waf
} // namespace QtAws

#endif

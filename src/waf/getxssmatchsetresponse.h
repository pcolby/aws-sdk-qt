// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETXSSMATCHSETRESPONSE_H
#define QTAWS_GETXSSMATCHSETRESPONSE_H

#include "wafresponse.h"
#include "getxssmatchsetrequest.h"

namespace QtAws {
namespace Waf {

class GetXssMatchSetResponsePrivate;

class QTAWSWAF_EXPORT GetXssMatchSetResponse : public WafResponse {
    Q_OBJECT

public:
    GetXssMatchSetResponse(const GetXssMatchSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetXssMatchSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetXssMatchSetResponse)
    Q_DISABLE_COPY(GetXssMatchSetResponse)

};

} // namespace Waf
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREGEXMATCHSETRESPONSE_H
#define QTAWS_GETREGEXMATCHSETRESPONSE_H

#include "wafregionalresponse.h"
#include "getregexmatchsetrequest.h"

namespace QtAws {
namespace WafRegional {

class GetRegexMatchSetResponsePrivate;

class QTAWSWAFREGIONAL_EXPORT GetRegexMatchSetResponse : public WafRegionalResponse {
    Q_OBJECT

public:
    GetRegexMatchSetResponse(const GetRegexMatchSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetRegexMatchSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRegexMatchSetResponse)
    Q_DISABLE_COPY(GetRegexMatchSetResponse)

};

} // namespace WafRegional
} // namespace QtAws

#endif

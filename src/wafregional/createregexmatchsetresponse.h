// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREGEXMATCHSETRESPONSE_H
#define QTAWS_CREATEREGEXMATCHSETRESPONSE_H

#include "wafregionalresponse.h"
#include "createregexmatchsetrequest.h"

namespace QtAws {
namespace WafRegional {

class CreateRegexMatchSetResponsePrivate;

class QTAWSWAFREGIONAL_EXPORT CreateRegexMatchSetResponse : public WafRegionalResponse {
    Q_OBJECT

public:
    CreateRegexMatchSetResponse(const CreateRegexMatchSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateRegexMatchSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateRegexMatchSetResponse)
    Q_DISABLE_COPY(CreateRegexMatchSetResponse)

};

} // namespace WafRegional
} // namespace QtAws

#endif

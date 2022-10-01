// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREGEXMATCHSETRESPONSE_H
#define QTAWS_DELETEREGEXMATCHSETRESPONSE_H

#include "wafregionalresponse.h"
#include "deleteregexmatchsetrequest.h"

namespace QtAws {
namespace WafRegional {

class DeleteRegexMatchSetResponsePrivate;

class QTAWSWAFREGIONAL_EXPORT DeleteRegexMatchSetResponse : public WafRegionalResponse {
    Q_OBJECT

public:
    DeleteRegexMatchSetResponse(const DeleteRegexMatchSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteRegexMatchSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRegexMatchSetResponse)
    Q_DISABLE_COPY(DeleteRegexMatchSetResponse)

};

} // namespace WafRegional
} // namespace QtAws

#endif

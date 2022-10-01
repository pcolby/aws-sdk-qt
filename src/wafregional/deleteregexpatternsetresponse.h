// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREGEXPATTERNSETRESPONSE_H
#define QTAWS_DELETEREGEXPATTERNSETRESPONSE_H

#include "wafregionalresponse.h"
#include "deleteregexpatternsetrequest.h"

namespace QtAws {
namespace WafRegional {

class DeleteRegexPatternSetResponsePrivate;

class QTAWSWAFREGIONAL_EXPORT DeleteRegexPatternSetResponse : public WafRegionalResponse {
    Q_OBJECT

public:
    DeleteRegexPatternSetResponse(const DeleteRegexPatternSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteRegexPatternSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRegexPatternSetResponse)
    Q_DISABLE_COPY(DeleteRegexPatternSetResponse)

};

} // namespace WafRegional
} // namespace QtAws

#endif

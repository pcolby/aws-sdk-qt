// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREGEXPATTERNSETRESPONSE_H
#define QTAWS_DELETEREGEXPATTERNSETRESPONSE_H

#include "wafv2response.h"
#include "deleteregexpatternsetrequest.h"

namespace QtAws {
namespace Wafv2 {

class DeleteRegexPatternSetResponsePrivate;

class QTAWSWAFV2_EXPORT DeleteRegexPatternSetResponse : public Wafv2Response {
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

} // namespace Wafv2
} // namespace QtAws

#endif

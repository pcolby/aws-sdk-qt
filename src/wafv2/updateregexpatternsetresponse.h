// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEREGEXPATTERNSETRESPONSE_H
#define QTAWS_UPDATEREGEXPATTERNSETRESPONSE_H

#include "wafv2response.h"
#include "updateregexpatternsetrequest.h"

namespace QtAws {
namespace Wafv2 {

class UpdateRegexPatternSetResponsePrivate;

class QTAWSWAFV2_EXPORT UpdateRegexPatternSetResponse : public Wafv2Response {
    Q_OBJECT

public:
    UpdateRegexPatternSetResponse(const UpdateRegexPatternSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateRegexPatternSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRegexPatternSetResponse)
    Q_DISABLE_COPY(UpdateRegexPatternSetResponse)

};

} // namespace Wafv2
} // namespace QtAws

#endif

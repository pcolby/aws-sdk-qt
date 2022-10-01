// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESQLINJECTIONMATCHSETRESPONSE_H
#define QTAWS_UPDATESQLINJECTIONMATCHSETRESPONSE_H

#include "wafresponse.h"
#include "updatesqlinjectionmatchsetrequest.h"

namespace QtAws {
namespace Waf {

class UpdateSqlInjectionMatchSetResponsePrivate;

class QTAWSWAF_EXPORT UpdateSqlInjectionMatchSetResponse : public WafResponse {
    Q_OBJECT

public:
    UpdateSqlInjectionMatchSetResponse(const UpdateSqlInjectionMatchSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateSqlInjectionMatchSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSqlInjectionMatchSetResponse)
    Q_DISABLE_COPY(UpdateSqlInjectionMatchSetResponse)

};

} // namespace Waf
} // namespace QtAws

#endif

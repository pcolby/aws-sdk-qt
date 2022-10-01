// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESQLINJECTIONMATCHSETRESPONSE_H
#define QTAWS_CREATESQLINJECTIONMATCHSETRESPONSE_H

#include "wafresponse.h"
#include "createsqlinjectionmatchsetrequest.h"

namespace QtAws {
namespace Waf {

class CreateSqlInjectionMatchSetResponsePrivate;

class QTAWSWAF_EXPORT CreateSqlInjectionMatchSetResponse : public WafResponse {
    Q_OBJECT

public:
    CreateSqlInjectionMatchSetResponse(const CreateSqlInjectionMatchSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateSqlInjectionMatchSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSqlInjectionMatchSetResponse)
    Q_DISABLE_COPY(CreateSqlInjectionMatchSetResponse)

};

} // namespace Waf
} // namespace QtAws

#endif

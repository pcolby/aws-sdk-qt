// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESQLINJECTIONMATCHSETRESPONSE_H
#define QTAWS_DELETESQLINJECTIONMATCHSETRESPONSE_H

#include "wafresponse.h"
#include "deletesqlinjectionmatchsetrequest.h"

namespace QtAws {
namespace Waf {

class DeleteSqlInjectionMatchSetResponsePrivate;

class QTAWSWAF_EXPORT DeleteSqlInjectionMatchSetResponse : public WafResponse {
    Q_OBJECT

public:
    DeleteSqlInjectionMatchSetResponse(const DeleteSqlInjectionMatchSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteSqlInjectionMatchSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSqlInjectionMatchSetResponse)
    Q_DISABLE_COPY(DeleteSqlInjectionMatchSetResponse)

};

} // namespace Waf
} // namespace QtAws

#endif

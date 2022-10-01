// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRULESRESPONSE_H
#define QTAWS_LISTRULESRESPONSE_H

#include "rbinresponse.h"
#include "listrulesrequest.h"

namespace QtAws {
namespace Rbin {

class ListRulesResponsePrivate;

class QTAWSRBIN_EXPORT ListRulesResponse : public RbinResponse {
    Q_OBJECT

public:
    ListRulesResponse(const ListRulesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListRulesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRulesResponse)
    Q_DISABLE_COPY(ListRulesResponse)

};

} // namespace Rbin
} // namespace QtAws

#endif

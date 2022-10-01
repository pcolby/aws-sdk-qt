// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCESSCONTROLRULESRESPONSE_H
#define QTAWS_LISTACCESSCONTROLRULESRESPONSE_H

#include "workmailresponse.h"
#include "listaccesscontrolrulesrequest.h"

namespace QtAws {
namespace WorkMail {

class ListAccessControlRulesResponsePrivate;

class QTAWSWORKMAIL_EXPORT ListAccessControlRulesResponse : public WorkMailResponse {
    Q_OBJECT

public:
    ListAccessControlRulesResponse(const ListAccessControlRulesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAccessControlRulesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAccessControlRulesResponse)
    Q_DISABLE_COPY(ListAccessControlRulesResponse)

};

} // namespace WorkMail
} // namespace QtAws

#endif

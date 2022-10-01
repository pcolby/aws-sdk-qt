// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMAILDOMAINRESPONSE_H
#define QTAWS_GETMAILDOMAINRESPONSE_H

#include "workmailresponse.h"
#include "getmaildomainrequest.h"

namespace QtAws {
namespace WorkMail {

class GetMailDomainResponsePrivate;

class QTAWSWORKMAIL_EXPORT GetMailDomainResponse : public WorkMailResponse {
    Q_OBJECT

public:
    GetMailDomainResponse(const GetMailDomainRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetMailDomainRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMailDomainResponse)
    Q_DISABLE_COPY(GetMailDomainResponse)

};

} // namespace WorkMail
} // namespace QtAws

#endif

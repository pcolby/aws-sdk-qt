// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERMAILDOMAINRESPONSE_H
#define QTAWS_REGISTERMAILDOMAINRESPONSE_H

#include "workmailresponse.h"
#include "registermaildomainrequest.h"

namespace QtAws {
namespace WorkMail {

class RegisterMailDomainResponsePrivate;

class QTAWSWORKMAIL_EXPORT RegisterMailDomainResponse : public WorkMailResponse {
    Q_OBJECT

public:
    RegisterMailDomainResponse(const RegisterMailDomainRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RegisterMailDomainRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterMailDomainResponse)
    Q_DISABLE_COPY(RegisterMailDomainResponse)

};

} // namespace WorkMail
} // namespace QtAws

#endif

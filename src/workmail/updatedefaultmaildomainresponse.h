// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDEFAULTMAILDOMAINRESPONSE_H
#define QTAWS_UPDATEDEFAULTMAILDOMAINRESPONSE_H

#include "workmailresponse.h"
#include "updatedefaultmaildomainrequest.h"

namespace QtAws {
namespace WorkMail {

class UpdateDefaultMailDomainResponsePrivate;

class QTAWSWORKMAIL_EXPORT UpdateDefaultMailDomainResponse : public WorkMailResponse {
    Q_OBJECT

public:
    UpdateDefaultMailDomainResponse(const UpdateDefaultMailDomainRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateDefaultMailDomainRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDefaultMailDomainResponse)
    Q_DISABLE_COPY(UpdateDefaultMailDomainResponse)

};

} // namespace WorkMail
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMAILBOXQUOTARESPONSE_H
#define QTAWS_UPDATEMAILBOXQUOTARESPONSE_H

#include "workmailresponse.h"
#include "updatemailboxquotarequest.h"

namespace QtAws {
namespace WorkMail {

class UpdateMailboxQuotaResponsePrivate;

class QTAWSWORKMAIL_EXPORT UpdateMailboxQuotaResponse : public WorkMailResponse {
    Q_OBJECT

public:
    UpdateMailboxQuotaResponse(const UpdateMailboxQuotaRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateMailboxQuotaRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateMailboxQuotaResponse)
    Q_DISABLE_COPY(UpdateMailboxQuotaResponse)

};

} // namespace WorkMail
} // namespace QtAws

#endif

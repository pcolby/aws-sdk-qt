// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDACTIVATIONCODERESPONSE_H
#define QTAWS_SENDACTIVATIONCODERESPONSE_H

#include "ssmcontactsresponse.h"
#include "sendactivationcoderequest.h"

namespace QtAws {
namespace SsmContacts {

class SendActivationCodeResponsePrivate;

class QTAWSSSMCONTACTS_EXPORT SendActivationCodeResponse : public SsmContactsResponse {
    Q_OBJECT

public:
    SendActivationCodeResponse(const SendActivationCodeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SendActivationCodeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SendActivationCodeResponse)
    Q_DISABLE_COPY(SendActivationCodeResponse)

};

} // namespace SsmContacts
} // namespace QtAws

#endif

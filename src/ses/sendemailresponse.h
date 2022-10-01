// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDEMAILRESPONSE_H
#define QTAWS_SENDEMAILRESPONSE_H

#include "sesresponse.h"
#include "sendemailrequest.h"

namespace QtAws {
namespace Ses {

class SendEmailResponsePrivate;

class QTAWSSES_EXPORT SendEmailResponse : public SesResponse {
    Q_OBJECT

public:
    SendEmailResponse(const SendEmailRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SendEmailRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SendEmailResponse)
    Q_DISABLE_COPY(SendEmailResponse)

};

} // namespace Ses
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDTEMPLATEDEMAILRESPONSE_H
#define QTAWS_SENDTEMPLATEDEMAILRESPONSE_H

#include "sesresponse.h"
#include "sendtemplatedemailrequest.h"

namespace QtAws {
namespace Ses {

class SendTemplatedEmailResponsePrivate;

class QTAWSSES_EXPORT SendTemplatedEmailResponse : public SesResponse {
    Q_OBJECT

public:
    SendTemplatedEmailResponse(const SendTemplatedEmailRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SendTemplatedEmailRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SendTemplatedEmailResponse)
    Q_DISABLE_COPY(SendTemplatedEmailResponse)

};

} // namespace Ses
} // namespace QtAws

#endif

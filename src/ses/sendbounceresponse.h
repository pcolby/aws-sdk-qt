// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDBOUNCERESPONSE_H
#define QTAWS_SENDBOUNCERESPONSE_H

#include "sesresponse.h"
#include "sendbouncerequest.h"

namespace QtAws {
namespace Ses {

class SendBounceResponsePrivate;

class QTAWSSES_EXPORT SendBounceResponse : public SesResponse {
    Q_OBJECT

public:
    SendBounceResponse(const SendBounceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SendBounceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SendBounceResponse)
    Q_DISABLE_COPY(SendBounceResponse)

};

} // namespace Ses
} // namespace QtAws

#endif

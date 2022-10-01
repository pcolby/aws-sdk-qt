// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTUSERSTATUSRESPONSE_H
#define QTAWS_PUTUSERSTATUSRESPONSE_H

#include "connectresponse.h"
#include "putuserstatusrequest.h"

namespace QtAws {
namespace Connect {

class PutUserStatusResponsePrivate;

class QTAWSCONNECT_EXPORT PutUserStatusResponse : public ConnectResponse {
    Q_OBJECT

public:
    PutUserStatusResponse(const PutUserStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutUserStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutUserStatusResponse)
    Q_DISABLE_COPY(PutUserStatusResponse)

};

} // namespace Connect
} // namespace QtAws

#endif

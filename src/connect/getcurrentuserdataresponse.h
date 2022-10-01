// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCURRENTUSERDATARESPONSE_H
#define QTAWS_GETCURRENTUSERDATARESPONSE_H

#include "connectresponse.h"
#include "getcurrentuserdatarequest.h"

namespace QtAws {
namespace Connect {

class GetCurrentUserDataResponsePrivate;

class QTAWSCONNECT_EXPORT GetCurrentUserDataResponse : public ConnectResponse {
    Q_OBJECT

public:
    GetCurrentUserDataResponse(const GetCurrentUserDataRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetCurrentUserDataRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCurrentUserDataResponse)
    Q_DISABLE_COPY(GetCurrentUserDataResponse)

};

} // namespace Connect
} // namespace QtAws

#endif

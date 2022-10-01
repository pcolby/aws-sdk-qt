// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEUSERIDENTITYINFORESPONSE_H
#define QTAWS_UPDATEUSERIDENTITYINFORESPONSE_H

#include "connectresponse.h"
#include "updateuseridentityinforequest.h"

namespace QtAws {
namespace Connect {

class UpdateUserIdentityInfoResponsePrivate;

class QTAWSCONNECT_EXPORT UpdateUserIdentityInfoResponse : public ConnectResponse {
    Q_OBJECT

public:
    UpdateUserIdentityInfoResponse(const UpdateUserIdentityInfoRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateUserIdentityInfoRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateUserIdentityInfoResponse)
    Q_DISABLE_COPY(UpdateUserIdentityInfoResponse)

};

} // namespace Connect
} // namespace QtAws

#endif

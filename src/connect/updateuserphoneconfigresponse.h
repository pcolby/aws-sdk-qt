// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEUSERPHONECONFIGRESPONSE_H
#define QTAWS_UPDATEUSERPHONECONFIGRESPONSE_H

#include "connectresponse.h"
#include "updateuserphoneconfigrequest.h"

namespace QtAws {
namespace Connect {

class UpdateUserPhoneConfigResponsePrivate;

class QTAWSCONNECT_EXPORT UpdateUserPhoneConfigResponse : public ConnectResponse {
    Q_OBJECT

public:
    UpdateUserPhoneConfigResponse(const UpdateUserPhoneConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateUserPhoneConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateUserPhoneConfigResponse)
    Q_DISABLE_COPY(UpdateUserPhoneConfigResponse)

};

} // namespace Connect
} // namespace QtAws

#endif

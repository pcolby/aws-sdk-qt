// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELAGRESPONSE_H
#define QTAWS_UPDATELAGRESPONSE_H

#include "directconnectresponse.h"
#include "updatelagrequest.h"

namespace QtAws {
namespace DirectConnect {

class UpdateLagResponsePrivate;

class QTAWSDIRECTCONNECT_EXPORT UpdateLagResponse : public DirectConnectResponse {
    Q_OBJECT

public:
    UpdateLagResponse(const UpdateLagRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateLagRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateLagResponse)
    Q_DISABLE_COPY(UpdateLagResponse)

};

} // namespace DirectConnect
} // namespace QtAws

#endif

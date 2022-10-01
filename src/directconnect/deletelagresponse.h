// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELAGRESPONSE_H
#define QTAWS_DELETELAGRESPONSE_H

#include "directconnectresponse.h"
#include "deletelagrequest.h"

namespace QtAws {
namespace DirectConnect {

class DeleteLagResponsePrivate;

class QTAWSDIRECTCONNECT_EXPORT DeleteLagResponse : public DirectConnectResponse {
    Q_OBJECT

public:
    DeleteLagResponse(const DeleteLagRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteLagRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteLagResponse)
    Q_DISABLE_COPY(DeleteLagResponse)

};

} // namespace DirectConnect
} // namespace QtAws

#endif

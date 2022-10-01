// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINTERCONNECTRESPONSE_H
#define QTAWS_DELETEINTERCONNECTRESPONSE_H

#include "directconnectresponse.h"
#include "deleteinterconnectrequest.h"

namespace QtAws {
namespace DirectConnect {

class DeleteInterconnectResponsePrivate;

class QTAWSDIRECTCONNECT_EXPORT DeleteInterconnectResponse : public DirectConnectResponse {
    Q_OBJECT

public:
    DeleteInterconnectResponse(const DeleteInterconnectRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteInterconnectRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteInterconnectResponse)
    Q_DISABLE_COPY(DeleteInterconnectResponse)

};

} // namespace DirectConnect
} // namespace QtAws

#endif

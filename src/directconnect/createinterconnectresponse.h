// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINTERCONNECTRESPONSE_H
#define QTAWS_CREATEINTERCONNECTRESPONSE_H

#include "directconnectresponse.h"
#include "createinterconnectrequest.h"

namespace QtAws {
namespace DirectConnect {

class CreateInterconnectResponsePrivate;

class QTAWSDIRECTCONNECT_EXPORT CreateInterconnectResponse : public DirectConnectResponse {
    Q_OBJECT

public:
    CreateInterconnectResponse(const CreateInterconnectRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateInterconnectRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateInterconnectResponse)
    Q_DISABLE_COPY(CreateInterconnectResponse)

};

} // namespace DirectConnect
} // namespace QtAws

#endif

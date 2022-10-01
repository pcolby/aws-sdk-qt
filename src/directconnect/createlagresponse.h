// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELAGRESPONSE_H
#define QTAWS_CREATELAGRESPONSE_H

#include "directconnectresponse.h"
#include "createlagrequest.h"

namespace QtAws {
namespace DirectConnect {

class CreateLagResponsePrivate;

class QTAWSDIRECTCONNECT_EXPORT CreateLagResponse : public DirectConnectResponse {
    Q_OBJECT

public:
    CreateLagResponse(const CreateLagRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateLagRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLagResponse)
    Q_DISABLE_COPY(CreateLagResponse)

};

} // namespace DirectConnect
} // namespace QtAws

#endif

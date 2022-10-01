// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVPCCONNECTORRESPONSE_H
#define QTAWS_CREATEVPCCONNECTORRESPONSE_H

#include "apprunnerresponse.h"
#include "createvpcconnectorrequest.h"

namespace QtAws {
namespace AppRunner {

class CreateVpcConnectorResponsePrivate;

class QTAWSAPPRUNNER_EXPORT CreateVpcConnectorResponse : public AppRunnerResponse {
    Q_OBJECT

public:
    CreateVpcConnectorResponse(const CreateVpcConnectorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateVpcConnectorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateVpcConnectorResponse)
    Q_DISABLE_COPY(CreateVpcConnectorResponse)

};

} // namespace AppRunner
} // namespace QtAws

#endif

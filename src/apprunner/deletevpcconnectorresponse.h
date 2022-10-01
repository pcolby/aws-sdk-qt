// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVPCCONNECTORRESPONSE_H
#define QTAWS_DELETEVPCCONNECTORRESPONSE_H

#include "apprunnerresponse.h"
#include "deletevpcconnectorrequest.h"

namespace QtAws {
namespace AppRunner {

class DeleteVpcConnectorResponsePrivate;

class QTAWSAPPRUNNER_EXPORT DeleteVpcConnectorResponse : public AppRunnerResponse {
    Q_OBJECT

public:
    DeleteVpcConnectorResponse(const DeleteVpcConnectorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteVpcConnectorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteVpcConnectorResponse)
    Q_DISABLE_COPY(DeleteVpcConnectorResponse)

};

} // namespace AppRunner
} // namespace QtAws

#endif

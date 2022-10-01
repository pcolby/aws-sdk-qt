// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERCONNECTORRESPONSE_H
#define QTAWS_REGISTERCONNECTORRESPONSE_H

#include "appflowresponse.h"
#include "registerconnectorrequest.h"

namespace QtAws {
namespace Appflow {

class RegisterConnectorResponsePrivate;

class QTAWSAPPFLOW_EXPORT RegisterConnectorResponse : public AppflowResponse {
    Q_OBJECT

public:
    RegisterConnectorResponse(const RegisterConnectorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RegisterConnectorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterConnectorResponse)
    Q_DISABLE_COPY(RegisterConnectorResponse)

};

} // namespace Appflow
} // namespace QtAws

#endif

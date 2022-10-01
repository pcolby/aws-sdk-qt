// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNREGISTERCONNECTORRESPONSE_H
#define QTAWS_UNREGISTERCONNECTORRESPONSE_H

#include "appflowresponse.h"
#include "unregisterconnectorrequest.h"

namespace QtAws {
namespace Appflow {

class UnregisterConnectorResponsePrivate;

class QTAWSAPPFLOW_EXPORT UnregisterConnectorResponse : public AppflowResponse {
    Q_OBJECT

public:
    UnregisterConnectorResponse(const UnregisterConnectorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UnregisterConnectorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UnregisterConnectorResponse)
    Q_DISABLE_COPY(UnregisterConnectorResponse)

};

} // namespace Appflow
} // namespace QtAws

#endif

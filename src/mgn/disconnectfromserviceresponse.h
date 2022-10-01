// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISCONNECTFROMSERVICERESPONSE_H
#define QTAWS_DISCONNECTFROMSERVICERESPONSE_H

#include "mgnresponse.h"
#include "disconnectfromservicerequest.h"

namespace QtAws {
namespace Mgn {

class DisconnectFromServiceResponsePrivate;

class QTAWSMGN_EXPORT DisconnectFromServiceResponse : public MgnResponse {
    Q_OBJECT

public:
    DisconnectFromServiceResponse(const DisconnectFromServiceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisconnectFromServiceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisconnectFromServiceResponse)
    Q_DISABLE_COPY(DisconnectFromServiceResponse)

};

} // namespace Mgn
} // namespace QtAws

#endif

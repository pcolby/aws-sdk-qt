// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEASSETSRESPONSE_H
#define QTAWS_DISASSOCIATEASSETSRESPONSE_H

#include "iotsitewiseresponse.h"
#include "disassociateassetsrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class DisassociateAssetsResponsePrivate;

class QTAWSIOTSITEWISE_EXPORT DisassociateAssetsResponse : public IoTSiteWiseResponse {
    Q_OBJECT

public:
    DisassociateAssetsResponse(const DisassociateAssetsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateAssetsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateAssetsResponse)
    Q_DISABLE_COPY(DisassociateAssetsResponse)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEASSETSRESPONSE_H
#define QTAWS_ASSOCIATEASSETSRESPONSE_H

#include "iotsitewiseresponse.h"
#include "associateassetsrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class AssociateAssetsResponsePrivate;

class QTAWSIOTSITEWISE_EXPORT AssociateAssetsResponse : public IoTSiteWiseResponse {
    Q_OBJECT

public:
    AssociateAssetsResponse(const AssociateAssetsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateAssetsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateAssetsResponse)
    Q_DISABLE_COPY(AssociateAssetsResponse)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif

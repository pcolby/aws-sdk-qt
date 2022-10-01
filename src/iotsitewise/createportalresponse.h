// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPORTALRESPONSE_H
#define QTAWS_CREATEPORTALRESPONSE_H

#include "iotsitewiseresponse.h"
#include "createportalrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class CreatePortalResponsePrivate;

class QTAWSIOTSITEWISE_EXPORT CreatePortalResponse : public IoTSiteWiseResponse {
    Q_OBJECT

public:
    CreatePortalResponse(const CreatePortalRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreatePortalRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePortalResponse)
    Q_DISABLE_COPY(CreatePortalResponse)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif

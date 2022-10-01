// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROJECTASSETSRESPONSE_H
#define QTAWS_LISTPROJECTASSETSRESPONSE_H

#include "iotsitewiseresponse.h"
#include "listprojectassetsrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class ListProjectAssetsResponsePrivate;

class QTAWSIOTSITEWISE_EXPORT ListProjectAssetsResponse : public IoTSiteWiseResponse {
    Q_OBJECT

public:
    ListProjectAssetsResponse(const ListProjectAssetsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListProjectAssetsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListProjectAssetsResponse)
    Q_DISABLE_COPY(ListProjectAssetsResponse)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif

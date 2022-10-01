// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSOCIATEDASSETSRESPONSE_H
#define QTAWS_LISTASSOCIATEDASSETSRESPONSE_H

#include "iotsitewiseresponse.h"
#include "listassociatedassetsrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class ListAssociatedAssetsResponsePrivate;

class QTAWSIOTSITEWISE_EXPORT ListAssociatedAssetsResponse : public IoTSiteWiseResponse {
    Q_OBJECT

public:
    ListAssociatedAssetsResponse(const ListAssociatedAssetsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAssociatedAssetsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAssociatedAssetsResponse)
    Q_DISABLE_COPY(ListAssociatedAssetsResponse)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif

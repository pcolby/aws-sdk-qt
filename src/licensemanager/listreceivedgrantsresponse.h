// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRECEIVEDGRANTSRESPONSE_H
#define QTAWS_LISTRECEIVEDGRANTSRESPONSE_H

#include "licensemanagerresponse.h"
#include "listreceivedgrantsrequest.h"

namespace QtAws {
namespace LicenseManager {

class ListReceivedGrantsResponsePrivate;

class QTAWSLICENSEMANAGER_EXPORT ListReceivedGrantsResponse : public LicenseManagerResponse {
    Q_OBJECT

public:
    ListReceivedGrantsResponse(const ListReceivedGrantsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListReceivedGrantsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListReceivedGrantsResponse)
    Q_DISABLE_COPY(ListReceivedGrantsResponse)

};

} // namespace LicenseManager
} // namespace QtAws

#endif

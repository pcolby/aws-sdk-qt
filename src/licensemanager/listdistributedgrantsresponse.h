// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDISTRIBUTEDGRANTSRESPONSE_H
#define QTAWS_LISTDISTRIBUTEDGRANTSRESPONSE_H

#include "licensemanagerresponse.h"
#include "listdistributedgrantsrequest.h"

namespace QtAws {
namespace LicenseManager {

class ListDistributedGrantsResponsePrivate;

class QTAWSLICENSEMANAGER_EXPORT ListDistributedGrantsResponse : public LicenseManagerResponse {
    Q_OBJECT

public:
    ListDistributedGrantsResponse(const ListDistributedGrantsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDistributedGrantsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDistributedGrantsResponse)
    Q_DISABLE_COPY(ListDistributedGrantsResponse)

};

} // namespace LicenseManager
} // namespace QtAws

#endif

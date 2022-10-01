// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOURCEINVENTORYRESPONSE_H
#define QTAWS_LISTRESOURCEINVENTORYRESPONSE_H

#include "licensemanagerresponse.h"
#include "listresourceinventoryrequest.h"

namespace QtAws {
namespace LicenseManager {

class ListResourceInventoryResponsePrivate;

class QTAWSLICENSEMANAGER_EXPORT ListResourceInventoryResponse : public LicenseManagerResponse {
    Q_OBJECT

public:
    ListResourceInventoryResponse(const ListResourceInventoryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListResourceInventoryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListResourceInventoryResponse)
    Q_DISABLE_COPY(ListResourceInventoryResponse)

};

} // namespace LicenseManager
} // namespace QtAws

#endif

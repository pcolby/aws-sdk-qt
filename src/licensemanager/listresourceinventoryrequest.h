// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOURCEINVENTORYREQUEST_H
#define QTAWS_LISTRESOURCEINVENTORYREQUEST_H

#include "licensemanagerrequest.h"

namespace QtAws {
namespace LicenseManager {

class ListResourceInventoryRequestPrivate;

class QTAWSLICENSEMANAGER_EXPORT ListResourceInventoryRequest : public LicenseManagerRequest {

public:
    ListResourceInventoryRequest(const ListResourceInventoryRequest &other);
    ListResourceInventoryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListResourceInventoryRequest)

};

} // namespace LicenseManager
} // namespace QtAws

#endif

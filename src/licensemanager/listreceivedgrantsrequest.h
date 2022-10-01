// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRECEIVEDGRANTSREQUEST_H
#define QTAWS_LISTRECEIVEDGRANTSREQUEST_H

#include "licensemanagerrequest.h"

namespace QtAws {
namespace LicenseManager {

class ListReceivedGrantsRequestPrivate;

class QTAWSLICENSEMANAGER_EXPORT ListReceivedGrantsRequest : public LicenseManagerRequest {

public:
    ListReceivedGrantsRequest(const ListReceivedGrantsRequest &other);
    ListReceivedGrantsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListReceivedGrantsRequest)

};

} // namespace LicenseManager
} // namespace QtAws

#endif

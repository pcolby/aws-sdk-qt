// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRECEIVEDLICENSESREQUEST_H
#define QTAWS_LISTRECEIVEDLICENSESREQUEST_H

#include "licensemanagerrequest.h"

namespace QtAws {
namespace LicenseManager {

class ListReceivedLicensesRequestPrivate;

class QTAWSLICENSEMANAGER_EXPORT ListReceivedLicensesRequest : public LicenseManagerRequest {

public:
    ListReceivedLicensesRequest(const ListReceivedLicensesRequest &other);
    ListReceivedLicensesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListReceivedLicensesRequest)

};

} // namespace LicenseManager
} // namespace QtAws

#endif

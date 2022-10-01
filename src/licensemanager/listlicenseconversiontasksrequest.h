// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLICENSECONVERSIONTASKSREQUEST_H
#define QTAWS_LISTLICENSECONVERSIONTASKSREQUEST_H

#include "licensemanagerrequest.h"

namespace QtAws {
namespace LicenseManager {

class ListLicenseConversionTasksRequestPrivate;

class QTAWSLICENSEMANAGER_EXPORT ListLicenseConversionTasksRequest : public LicenseManagerRequest {

public:
    ListLicenseConversionTasksRequest(const ListLicenseConversionTasksRequest &other);
    ListLicenseConversionTasksRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListLicenseConversionTasksRequest)

};

} // namespace LicenseManager
} // namespace QtAws

#endif

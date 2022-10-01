// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLICENSECONVERSIONTASKSRESPONSE_H
#define QTAWS_LISTLICENSECONVERSIONTASKSRESPONSE_H

#include "licensemanagerresponse.h"
#include "listlicenseconversiontasksrequest.h"

namespace QtAws {
namespace LicenseManager {

class ListLicenseConversionTasksResponsePrivate;

class QTAWSLICENSEMANAGER_EXPORT ListLicenseConversionTasksResponse : public LicenseManagerResponse {
    Q_OBJECT

public:
    ListLicenseConversionTasksResponse(const ListLicenseConversionTasksRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListLicenseConversionTasksRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListLicenseConversionTasksResponse)
    Q_DISABLE_COPY(ListLicenseConversionTasksResponse)

};

} // namespace LicenseManager
} // namespace QtAws

#endif

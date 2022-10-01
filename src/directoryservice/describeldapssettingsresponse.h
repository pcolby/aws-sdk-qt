// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELDAPSSETTINGSRESPONSE_H
#define QTAWS_DESCRIBELDAPSSETTINGSRESPONSE_H

#include "directoryserviceresponse.h"
#include "describeldapssettingsrequest.h"

namespace QtAws {
namespace DirectoryService {

class DescribeLDAPSSettingsResponsePrivate;

class QTAWSDIRECTORYSERVICE_EXPORT DescribeLDAPSSettingsResponse : public DirectoryServiceResponse {
    Q_OBJECT

public:
    DescribeLDAPSSettingsResponse(const DescribeLDAPSSettingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeLDAPSSettingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLDAPSSettingsResponse)
    Q_DISABLE_COPY(DescribeLDAPSSettingsResponse)

};

} // namespace DirectoryService
} // namespace QtAws

#endif

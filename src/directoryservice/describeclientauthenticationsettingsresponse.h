// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLIENTAUTHENTICATIONSETTINGSRESPONSE_H
#define QTAWS_DESCRIBECLIENTAUTHENTICATIONSETTINGSRESPONSE_H

#include "directoryserviceresponse.h"
#include "describeclientauthenticationsettingsrequest.h"

namespace QtAws {
namespace DirectoryService {

class DescribeClientAuthenticationSettingsResponsePrivate;

class QTAWSDIRECTORYSERVICE_EXPORT DescribeClientAuthenticationSettingsResponse : public DirectoryServiceResponse {
    Q_OBJECT

public:
    DescribeClientAuthenticationSettingsResponse(const DescribeClientAuthenticationSettingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeClientAuthenticationSettingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeClientAuthenticationSettingsResponse)
    Q_DISABLE_COPY(DescribeClientAuthenticationSettingsResponse)

};

} // namespace DirectoryService
} // namespace QtAws

#endif

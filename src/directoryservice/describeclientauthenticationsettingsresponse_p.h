// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLIENTAUTHENTICATIONSETTINGSRESPONSE_P_H
#define QTAWS_DESCRIBECLIENTAUTHENTICATIONSETTINGSRESPONSE_P_H

#include "directoryserviceresponse_p.h"

namespace QtAws {
namespace DirectoryService {

class DescribeClientAuthenticationSettingsResponse;

class DescribeClientAuthenticationSettingsResponsePrivate : public DirectoryServiceResponsePrivate {

public:

    explicit DescribeClientAuthenticationSettingsResponsePrivate(DescribeClientAuthenticationSettingsResponse * const q);

    void parseDescribeClientAuthenticationSettingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeClientAuthenticationSettingsResponse)
    Q_DISABLE_COPY(DescribeClientAuthenticationSettingsResponsePrivate)

};

} // namespace DirectoryService
} // namespace QtAws

#endif

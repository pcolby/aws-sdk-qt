// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGOVCLOUDACCOUNTRESPONSE_P_H
#define QTAWS_CREATEGOVCLOUDACCOUNTRESPONSE_P_H

#include "organizationsresponse_p.h"

namespace QtAws {
namespace Organizations {

class CreateGovCloudAccountResponse;

class CreateGovCloudAccountResponsePrivate : public OrganizationsResponsePrivate {

public:

    explicit CreateGovCloudAccountResponsePrivate(CreateGovCloudAccountResponse * const q);

    void parseCreateGovCloudAccountResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateGovCloudAccountResponse)
    Q_DISABLE_COPY(CreateGovCloudAccountResponsePrivate)

};

} // namespace Organizations
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECOMPANYNETWORKCONFIGURATIONRESPONSE_P_H
#define QTAWS_UPDATECOMPANYNETWORKCONFIGURATIONRESPONSE_P_H

#include "worklinkresponse_p.h"

namespace QtAws {
namespace WorkLink {

class UpdateCompanyNetworkConfigurationResponse;

class UpdateCompanyNetworkConfigurationResponsePrivate : public WorkLinkResponsePrivate {

public:

    explicit UpdateCompanyNetworkConfigurationResponsePrivate(UpdateCompanyNetworkConfigurationResponse * const q);

    void parseUpdateCompanyNetworkConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateCompanyNetworkConfigurationResponse)
    Q_DISABLE_COPY(UpdateCompanyNetworkConfigurationResponsePrivate)

};

} // namespace WorkLink
} // namespace QtAws

#endif

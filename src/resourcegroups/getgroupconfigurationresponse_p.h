// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGROUPCONFIGURATIONRESPONSE_P_H
#define QTAWS_GETGROUPCONFIGURATIONRESPONSE_P_H

#include "resourcegroupsresponse_p.h"

namespace QtAws {
namespace ResourceGroups {

class GetGroupConfigurationResponse;

class GetGroupConfigurationResponsePrivate : public ResourceGroupsResponsePrivate {

public:

    explicit GetGroupConfigurationResponsePrivate(GetGroupConfigurationResponse * const q);

    void parseGetGroupConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetGroupConfigurationResponse)
    Q_DISABLE_COPY(GetGroupConfigurationResponsePrivate)

};

} // namespace ResourceGroups
} // namespace QtAws

#endif

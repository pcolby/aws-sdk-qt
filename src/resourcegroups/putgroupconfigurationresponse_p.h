// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTGROUPCONFIGURATIONRESPONSE_P_H
#define QTAWS_PUTGROUPCONFIGURATIONRESPONSE_P_H

#include "resourcegroupsresponse_p.h"

namespace QtAws {
namespace ResourceGroups {

class PutGroupConfigurationResponse;

class PutGroupConfigurationResponsePrivate : public ResourceGroupsResponsePrivate {

public:

    explicit PutGroupConfigurationResponsePrivate(PutGroupConfigurationResponse * const q);

    void parsePutGroupConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutGroupConfigurationResponse)
    Q_DISABLE_COPY(PutGroupConfigurationResponsePrivate)

};

} // namespace ResourceGroups
} // namespace QtAws

#endif

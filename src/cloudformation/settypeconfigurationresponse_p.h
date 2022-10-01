// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETTYPECONFIGURATIONRESPONSE_P_H
#define QTAWS_SETTYPECONFIGURATIONRESPONSE_P_H

#include "cloudformationresponse_p.h"

namespace QtAws {
namespace CloudFormation {

class SetTypeConfigurationResponse;

class SetTypeConfigurationResponsePrivate : public CloudFormationResponsePrivate {

public:

    explicit SetTypeConfigurationResponsePrivate(SetTypeConfigurationResponse * const q);

    void parseSetTypeConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SetTypeConfigurationResponse)
    Q_DISABLE_COPY(SetTypeConfigurationResponsePrivate)

};

} // namespace CloudFormation
} // namespace QtAws

#endif

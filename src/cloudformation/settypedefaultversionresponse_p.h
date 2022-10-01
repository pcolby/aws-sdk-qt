// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETTYPEDEFAULTVERSIONRESPONSE_P_H
#define QTAWS_SETTYPEDEFAULTVERSIONRESPONSE_P_H

#include "cloudformationresponse_p.h"

namespace QtAws {
namespace CloudFormation {

class SetTypeDefaultVersionResponse;

class SetTypeDefaultVersionResponsePrivate : public CloudFormationResponsePrivate {

public:

    explicit SetTypeDefaultVersionResponsePrivate(SetTypeDefaultVersionResponse * const q);

    void parseSetTypeDefaultVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SetTypeDefaultVersionResponse)
    Q_DISABLE_COPY(SetTypeDefaultVersionResponsePrivate)

};

} // namespace CloudFormation
} // namespace QtAws

#endif

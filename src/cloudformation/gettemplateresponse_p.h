// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTEMPLATERESPONSE_P_H
#define QTAWS_GETTEMPLATERESPONSE_P_H

#include "cloudformationresponse_p.h"

namespace QtAws {
namespace CloudFormation {

class GetTemplateResponse;

class GetTemplateResponsePrivate : public CloudFormationResponsePrivate {

public:

    explicit GetTemplateResponsePrivate(GetTemplateResponse * const q);

    void parseGetTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetTemplateResponse)
    Q_DISABLE_COPY(GetTemplateResponsePrivate)

};

} // namespace CloudFormation
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VALIDATETEMPLATERESPONSE_P_H
#define QTAWS_VALIDATETEMPLATERESPONSE_P_H

#include "cloudformationresponse_p.h"

namespace QtAws {
namespace CloudFormation {

class ValidateTemplateResponse;

class ValidateTemplateResponsePrivate : public CloudFormationResponsePrivate {

public:

    explicit ValidateTemplateResponsePrivate(ValidateTemplateResponse * const q);

    void parseValidateTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ValidateTemplateResponse)
    Q_DISABLE_COPY(ValidateTemplateResponsePrivate)

};

} // namespace CloudFormation
} // namespace QtAws

#endif

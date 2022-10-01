// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEXPERIMENTTEMPLATERESPONSE_P_H
#define QTAWS_GETEXPERIMENTTEMPLATERESPONSE_P_H

#include "fisresponse_p.h"

namespace QtAws {
namespace Fis {

class GetExperimentTemplateResponse;

class GetExperimentTemplateResponsePrivate : public FisResponsePrivate {

public:

    explicit GetExperimentTemplateResponsePrivate(GetExperimentTemplateResponse * const q);

    void parseGetExperimentTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetExperimentTemplateResponse)
    Q_DISABLE_COPY(GetExperimentTemplateResponsePrivate)

};

} // namespace Fis
} // namespace QtAws

#endif

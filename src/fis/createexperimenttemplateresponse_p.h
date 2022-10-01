// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEXPERIMENTTEMPLATERESPONSE_P_H
#define QTAWS_CREATEEXPERIMENTTEMPLATERESPONSE_P_H

#include "fisresponse_p.h"

namespace QtAws {
namespace Fis {

class CreateExperimentTemplateResponse;

class CreateExperimentTemplateResponsePrivate : public FisResponsePrivate {

public:

    explicit CreateExperimentTemplateResponsePrivate(CreateExperimentTemplateResponse * const q);

    void parseCreateExperimentTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateExperimentTemplateResponse)
    Q_DISABLE_COPY(CreateExperimentTemplateResponsePrivate)

};

} // namespace Fis
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEEXPERIMENTTEMPLATERESPONSE_P_H
#define QTAWS_UPDATEEXPERIMENTTEMPLATERESPONSE_P_H

#include "fisresponse_p.h"

namespace QtAws {
namespace Fis {

class UpdateExperimentTemplateResponse;

class UpdateExperimentTemplateResponsePrivate : public FisResponsePrivate {

public:

    explicit UpdateExperimentTemplateResponsePrivate(UpdateExperimentTemplateResponse * const q);

    void parseUpdateExperimentTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateExperimentTemplateResponse)
    Q_DISABLE_COPY(UpdateExperimentTemplateResponsePrivate)

};

} // namespace Fis
} // namespace QtAws

#endif

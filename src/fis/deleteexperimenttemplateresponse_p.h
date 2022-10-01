// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEXPERIMENTTEMPLATERESPONSE_P_H
#define QTAWS_DELETEEXPERIMENTTEMPLATERESPONSE_P_H

#include "fisresponse_p.h"

namespace QtAws {
namespace Fis {

class DeleteExperimentTemplateResponse;

class DeleteExperimentTemplateResponsePrivate : public FisResponsePrivate {

public:

    explicit DeleteExperimentTemplateResponsePrivate(DeleteExperimentTemplateResponse * const q);

    void parseDeleteExperimentTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteExperimentTemplateResponse)
    Q_DISABLE_COPY(DeleteExperimentTemplateResponsePrivate)

};

} // namespace Fis
} // namespace QtAws

#endif

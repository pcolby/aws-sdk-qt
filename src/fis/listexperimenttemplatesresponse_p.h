// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEXPERIMENTTEMPLATESRESPONSE_P_H
#define QTAWS_LISTEXPERIMENTTEMPLATESRESPONSE_P_H

#include "fisresponse_p.h"

namespace QtAws {
namespace Fis {

class ListExperimentTemplatesResponse;

class ListExperimentTemplatesResponsePrivate : public FisResponsePrivate {

public:

    explicit ListExperimentTemplatesResponsePrivate(ListExperimentTemplatesResponse * const q);

    void parseListExperimentTemplatesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListExperimentTemplatesResponse)
    Q_DISABLE_COPY(ListExperimentTemplatesResponsePrivate)

};

} // namespace Fis
} // namespace QtAws

#endif

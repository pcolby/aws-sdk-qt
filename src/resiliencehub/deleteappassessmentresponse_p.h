// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPASSESSMENTRESPONSE_P_H
#define QTAWS_DELETEAPPASSESSMENTRESPONSE_P_H

#include "resiliencehubresponse_p.h"

namespace QtAws {
namespace ResilienceHub {

class DeleteAppAssessmentResponse;

class DeleteAppAssessmentResponsePrivate : public ResilienceHubResponsePrivate {

public:

    explicit DeleteAppAssessmentResponsePrivate(DeleteAppAssessmentResponse * const q);

    void parseDeleteAppAssessmentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteAppAssessmentResponse)
    Q_DISABLE_COPY(DeleteAppAssessmentResponsePrivate)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif

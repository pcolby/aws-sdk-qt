// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCANDIDATESFORAUTOMLJOBRESPONSE_P_H
#define QTAWS_LISTCANDIDATESFORAUTOMLJOBRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class ListCandidatesForAutoMLJobResponse;

class ListCandidatesForAutoMLJobResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit ListCandidatesForAutoMLJobResponsePrivate(ListCandidatesForAutoMLJobResponse * const q);

    void parseListCandidatesForAutoMLJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListCandidatesForAutoMLJobResponse)
    Q_DISABLE_COPY(ListCandidatesForAutoMLJobResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif

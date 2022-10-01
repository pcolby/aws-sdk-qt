// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMODELSRESPONSE_P_H
#define QTAWS_LISTMODELSRESPONSE_P_H

#include "lookoutvisionresponse_p.h"

namespace QtAws {
namespace LookoutVision {

class ListModelsResponse;

class ListModelsResponsePrivate : public LookoutVisionResponsePrivate {

public:

    explicit ListModelsResponsePrivate(ListModelsResponse * const q);

    void parseListModelsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListModelsResponse)
    Q_DISABLE_COPY(ListModelsResponsePrivate)

};

} // namespace LookoutVision
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTMODELRESPONSE_P_H
#define QTAWS_STARTMODELRESPONSE_P_H

#include "lookoutvisionresponse_p.h"

namespace QtAws {
namespace LookoutVision {

class StartModelResponse;

class StartModelResponsePrivate : public LookoutVisionResponsePrivate {

public:

    explicit StartModelResponsePrivate(StartModelResponse * const q);

    void parseStartModelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartModelResponse)
    Q_DISABLE_COPY(StartModelResponsePrivate)

};

} // namespace LookoutVision
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMODELRESPONSE_P_H
#define QTAWS_DELETEMODELRESPONSE_P_H

#include "lookoutvisionresponse_p.h"

namespace QtAws {
namespace LookoutVision {

class DeleteModelResponse;

class DeleteModelResponsePrivate : public LookoutVisionResponsePrivate {

public:

    explicit DeleteModelResponsePrivate(DeleteModelResponse * const q);

    void parseDeleteModelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteModelResponse)
    Q_DISABLE_COPY(DeleteModelResponsePrivate)

};

} // namespace LookoutVision
} // namespace QtAws

#endif

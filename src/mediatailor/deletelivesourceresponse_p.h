// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELIVESOURCERESPONSE_P_H
#define QTAWS_DELETELIVESOURCERESPONSE_P_H

#include "mediatailorresponse_p.h"

namespace QtAws {
namespace MediaTailor {

class DeleteLiveSourceResponse;

class DeleteLiveSourceResponsePrivate : public MediaTailorResponsePrivate {

public:

    explicit DeleteLiveSourceResponsePrivate(DeleteLiveSourceResponse * const q);

    void parseDeleteLiveSourceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteLiveSourceResponse)
    Q_DISABLE_COPY(DeleteLiveSourceResponsePrivate)

};

} // namespace MediaTailor
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINPUTRESPONSE_P_H
#define QTAWS_DELETEINPUTRESPONSE_P_H

#include "medialiveresponse_p.h"

namespace QtAws {
namespace MediaLive {

class DeleteInputResponse;

class DeleteInputResponsePrivate : public MediaLiveResponsePrivate {

public:

    explicit DeleteInputResponsePrivate(DeleteInputResponse * const q);

    void parseDeleteInputResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteInputResponse)
    Q_DISABLE_COPY(DeleteInputResponsePrivate)

};

} // namespace MediaLive
} // namespace QtAws

#endif

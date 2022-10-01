// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESEGMENTRESPONSE_P_H
#define QTAWS_DELETESEGMENTRESPONSE_P_H

#include "evidentlyresponse_p.h"

namespace QtAws {
namespace Evidently {

class DeleteSegmentResponse;

class DeleteSegmentResponsePrivate : public EvidentlyResponsePrivate {

public:

    explicit DeleteSegmentResponsePrivate(DeleteSegmentResponse * const q);

    void parseDeleteSegmentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteSegmentResponse)
    Q_DISABLE_COPY(DeleteSegmentResponsePrivate)

};

} // namespace Evidently
} // namespace QtAws

#endif

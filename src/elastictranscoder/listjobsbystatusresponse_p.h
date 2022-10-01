// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTJOBSBYSTATUSRESPONSE_P_H
#define QTAWS_LISTJOBSBYSTATUSRESPONSE_P_H

#include "elastictranscoderresponse_p.h"

namespace QtAws {
namespace ElasticTranscoder {

class ListJobsByStatusResponse;

class ListJobsByStatusResponsePrivate : public ElasticTranscoderResponsePrivate {

public:

    explicit ListJobsByStatusResponsePrivate(ListJobsByStatusResponse * const q);

    void parseListJobsByStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListJobsByStatusResponse)
    Q_DISABLE_COPY(ListJobsByStatusResponsePrivate)

};

} // namespace ElasticTranscoder
} // namespace QtAws

#endif

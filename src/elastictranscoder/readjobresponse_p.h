// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_READJOBRESPONSE_P_H
#define QTAWS_READJOBRESPONSE_P_H

#include "elastictranscoderresponse_p.h"

namespace QtAws {
namespace ElasticTranscoder {

class ReadJobResponse;

class ReadJobResponsePrivate : public ElasticTranscoderResponsePrivate {

public:

    explicit ReadJobResponsePrivate(ReadJobResponse * const q);

    void parseReadJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ReadJobResponse)
    Q_DISABLE_COPY(ReadJobResponsePrivate)

};

} // namespace ElasticTranscoder
} // namespace QtAws

#endif

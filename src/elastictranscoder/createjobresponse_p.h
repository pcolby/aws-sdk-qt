// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEJOBRESPONSE_P_H
#define QTAWS_CREATEJOBRESPONSE_P_H

#include "elastictranscoderresponse_p.h"

namespace QtAws {
namespace ElasticTranscoder {

class CreateJobResponse;

class CreateJobResponsePrivate : public ElasticTranscoderResponsePrivate {

public:

    explicit CreateJobResponsePrivate(CreateJobResponse * const q);

    void parseCreateJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateJobResponse)
    Q_DISABLE_COPY(CreateJobResponsePrivate)

};

} // namespace ElasticTranscoder
} // namespace QtAws

#endif

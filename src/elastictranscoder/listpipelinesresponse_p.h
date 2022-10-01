// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPIPELINESRESPONSE_P_H
#define QTAWS_LISTPIPELINESRESPONSE_P_H

#include "elastictranscoderresponse_p.h"

namespace QtAws {
namespace ElasticTranscoder {

class ListPipelinesResponse;

class ListPipelinesResponsePrivate : public ElasticTranscoderResponsePrivate {

public:

    explicit ListPipelinesResponsePrivate(ListPipelinesResponse * const q);

    void parseListPipelinesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListPipelinesResponse)
    Q_DISABLE_COPY(ListPipelinesResponsePrivate)

};

} // namespace ElasticTranscoder
} // namespace QtAws

#endif

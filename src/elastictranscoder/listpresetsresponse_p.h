// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPRESETSRESPONSE_P_H
#define QTAWS_LISTPRESETSRESPONSE_P_H

#include "elastictranscoderresponse_p.h"

namespace QtAws {
namespace ElasticTranscoder {

class ListPresetsResponse;

class ListPresetsResponsePrivate : public ElasticTranscoderResponsePrivate {

public:

    explicit ListPresetsResponsePrivate(ListPresetsResponse * const q);

    void parseListPresetsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListPresetsResponse)
    Q_DISABLE_COPY(ListPresetsResponsePrivate)

};

} // namespace ElasticTranscoder
} // namespace QtAws

#endif

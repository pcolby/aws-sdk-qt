// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCESSPREVIEWSRESPONSE_P_H
#define QTAWS_LISTACCESSPREVIEWSRESPONSE_P_H

#include "accessanalyzerresponse_p.h"

namespace QtAws {
namespace AccessAnalyzer {

class ListAccessPreviewsResponse;

class ListAccessPreviewsResponsePrivate : public AccessAnalyzerResponsePrivate {

public:

    explicit ListAccessPreviewsResponsePrivate(ListAccessPreviewsResponse * const q);

    void parseListAccessPreviewsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAccessPreviewsResponse)
    Q_DISABLE_COPY(ListAccessPreviewsResponsePrivate)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif

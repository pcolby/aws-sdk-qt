// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCESSPREVIEWFINDINGSRESPONSE_P_H
#define QTAWS_LISTACCESSPREVIEWFINDINGSRESPONSE_P_H

#include "accessanalyzerresponse_p.h"

namespace QtAws {
namespace AccessAnalyzer {

class ListAccessPreviewFindingsResponse;

class ListAccessPreviewFindingsResponsePrivate : public AccessAnalyzerResponsePrivate {

public:

    explicit ListAccessPreviewFindingsResponsePrivate(ListAccessPreviewFindingsResponse * const q);

    void parseListAccessPreviewFindingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAccessPreviewFindingsResponse)
    Q_DISABLE_COPY(ListAccessPreviewFindingsResponsePrivate)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif

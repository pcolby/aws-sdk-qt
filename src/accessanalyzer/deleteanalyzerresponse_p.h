// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEANALYZERRESPONSE_P_H
#define QTAWS_DELETEANALYZERRESPONSE_P_H

#include "accessanalyzerresponse_p.h"

namespace QtAws {
namespace AccessAnalyzer {

class DeleteAnalyzerResponse;

class DeleteAnalyzerResponsePrivate : public AccessAnalyzerResponsePrivate {

public:

    explicit DeleteAnalyzerResponsePrivate(DeleteAnalyzerResponse * const q);

    void parseDeleteAnalyzerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteAnalyzerResponse)
    Q_DISABLE_COPY(DeleteAnalyzerResponsePrivate)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif

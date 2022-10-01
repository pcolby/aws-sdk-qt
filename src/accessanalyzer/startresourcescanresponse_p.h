// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTRESOURCESCANRESPONSE_P_H
#define QTAWS_STARTRESOURCESCANRESPONSE_P_H

#include "accessanalyzerresponse_p.h"

namespace QtAws {
namespace AccessAnalyzer {

class StartResourceScanResponse;

class StartResourceScanResponsePrivate : public AccessAnalyzerResponsePrivate {

public:

    explicit StartResourceScanResponsePrivate(StartResourceScanResponse * const q);

    void parseStartResourceScanResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartResourceScanResponse)
    Q_DISABLE_COPY(StartResourceScanResponsePrivate)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif

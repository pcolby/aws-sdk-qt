// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ANALYZEIDRESPONSE_P_H
#define QTAWS_ANALYZEIDRESPONSE_P_H

#include "textractresponse_p.h"

namespace QtAws {
namespace Textract {

class AnalyzeIDResponse;

class AnalyzeIDResponsePrivate : public TextractResponsePrivate {

public:

    explicit AnalyzeIDResponsePrivate(AnalyzeIDResponse * const q);

    void parseAnalyzeIDResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AnalyzeIDResponse)
    Q_DISABLE_COPY(AnalyzeIDResponsePrivate)

};

} // namespace Textract
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEACCESSPREVIEWRESPONSE_P_H
#define QTAWS_CREATEACCESSPREVIEWRESPONSE_P_H

#include "accessanalyzerresponse_p.h"

namespace QtAws {
namespace AccessAnalyzer {

class CreateAccessPreviewResponse;

class CreateAccessPreviewResponsePrivate : public AccessAnalyzerResponsePrivate {

public:

    explicit CreateAccessPreviewResponsePrivate(CreateAccessPreviewResponse * const q);

    void parseCreateAccessPreviewResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateAccessPreviewResponse)
    Q_DISABLE_COPY(CreateAccessPreviewResponsePrivate)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif

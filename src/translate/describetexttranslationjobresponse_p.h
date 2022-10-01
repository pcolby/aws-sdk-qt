// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETEXTTRANSLATIONJOBRESPONSE_P_H
#define QTAWS_DESCRIBETEXTTRANSLATIONJOBRESPONSE_P_H

#include "translateresponse_p.h"

namespace QtAws {
namespace Translate {

class DescribeTextTranslationJobResponse;

class DescribeTextTranslationJobResponsePrivate : public TranslateResponsePrivate {

public:

    explicit DescribeTextTranslationJobResponsePrivate(DescribeTextTranslationJobResponse * const q);

    void parseDescribeTextTranslationJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeTextTranslationJobResponse)
    Q_DISABLE_COPY(DescribeTextTranslationJobResponsePrivate)

};

} // namespace Translate
} // namespace QtAws

#endif

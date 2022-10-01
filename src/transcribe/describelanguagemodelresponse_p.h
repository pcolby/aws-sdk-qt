// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELANGUAGEMODELRESPONSE_P_H
#define QTAWS_DESCRIBELANGUAGEMODELRESPONSE_P_H

#include "transcriberesponse_p.h"

namespace QtAws {
namespace Transcribe {

class DescribeLanguageModelResponse;

class DescribeLanguageModelResponsePrivate : public TranscribeResponsePrivate {

public:

    explicit DescribeLanguageModelResponsePrivate(DescribeLanguageModelResponse * const q);

    void parseDescribeLanguageModelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeLanguageModelResponse)
    Q_DISABLE_COPY(DescribeLanguageModelResponsePrivate)

};

} // namespace Transcribe
} // namespace QtAws

#endif

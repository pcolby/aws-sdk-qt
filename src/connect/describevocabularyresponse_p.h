// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVOCABULARYRESPONSE_P_H
#define QTAWS_DESCRIBEVOCABULARYRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class DescribeVocabularyResponse;

class DescribeVocabularyResponsePrivate : public ConnectResponsePrivate {

public:

    explicit DescribeVocabularyResponsePrivate(DescribeVocabularyResponse * const q);

    void parseDescribeVocabularyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeVocabularyResponse)
    Q_DISABLE_COPY(DescribeVocabularyResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif

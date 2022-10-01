// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPOLICYGENERATIONSRESPONSE_P_H
#define QTAWS_LISTPOLICYGENERATIONSRESPONSE_P_H

#include "accessanalyzerresponse_p.h"

namespace QtAws {
namespace AccessAnalyzer {

class ListPolicyGenerationsResponse;

class ListPolicyGenerationsResponsePrivate : public AccessAnalyzerResponsePrivate {

public:

    explicit ListPolicyGenerationsResponsePrivate(ListPolicyGenerationsResponse * const q);

    void parseListPolicyGenerationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListPolicyGenerationsResponse)
    Q_DISABLE_COPY(ListPolicyGenerationsResponsePrivate)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif

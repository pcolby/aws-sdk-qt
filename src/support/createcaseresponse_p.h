// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECASERESPONSE_P_H
#define QTAWS_CREATECASERESPONSE_P_H

#include "supportresponse_p.h"

namespace QtAws {
namespace Support {

class CreateCaseResponse;

class CreateCaseResponsePrivate : public SupportResponsePrivate {

public:

    explicit CreateCaseResponsePrivate(CreateCaseResponse * const q);

    void parseCreateCaseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateCaseResponse)
    Q_DISABLE_COPY(CreateCaseResponsePrivate)

};

} // namespace Support
} // namespace QtAws

#endif

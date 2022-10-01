// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESOLVECASERESPONSE_P_H
#define QTAWS_RESOLVECASERESPONSE_P_H

#include "supportresponse_p.h"

namespace QtAws {
namespace Support {

class ResolveCaseResponse;

class ResolveCaseResponsePrivate : public SupportResponsePrivate {

public:

    explicit ResolveCaseResponsePrivate(ResolveCaseResponse * const q);

    void parseResolveCaseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ResolveCaseResponse)
    Q_DISABLE_COPY(ResolveCaseResponsePrivate)

};

} // namespace Support
} // namespace QtAws

#endif

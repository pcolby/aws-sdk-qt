// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESOLUTIONRESPONSE_P_H
#define QTAWS_DESCRIBESOLUTIONRESPONSE_P_H

#include "personalizeresponse_p.h"

namespace QtAws {
namespace Personalize {

class DescribeSolutionResponse;

class DescribeSolutionResponsePrivate : public PersonalizeResponsePrivate {

public:

    explicit DescribeSolutionResponsePrivate(DescribeSolutionResponse * const q);

    void parseDescribeSolutionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeSolutionResponse)
    Q_DISABLE_COPY(DescribeSolutionResponsePrivate)

};

} // namespace Personalize
} // namespace QtAws

#endif

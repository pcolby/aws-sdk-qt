// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESOLUTIONVERSIONRESPONSE_P_H
#define QTAWS_DESCRIBESOLUTIONVERSIONRESPONSE_P_H

#include "personalizeresponse_p.h"

namespace QtAws {
namespace Personalize {

class DescribeSolutionVersionResponse;

class DescribeSolutionVersionResponsePrivate : public PersonalizeResponsePrivate {

public:

    explicit DescribeSolutionVersionResponsePrivate(DescribeSolutionVersionResponse * const q);

    void parseDescribeSolutionVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeSolutionVersionResponse)
    Q_DISABLE_COPY(DescribeSolutionVersionResponsePrivate)

};

} // namespace Personalize
} // namespace QtAws

#endif

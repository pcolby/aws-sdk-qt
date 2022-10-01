// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEFINESUGGESTERRESPONSE_P_H
#define QTAWS_DEFINESUGGESTERRESPONSE_P_H

#include "cloudsearchresponse_p.h"

namespace QtAws {
namespace CloudSearch {

class DefineSuggesterResponse;

class DefineSuggesterResponsePrivate : public CloudSearchResponsePrivate {

public:

    explicit DefineSuggesterResponsePrivate(DefineSuggesterResponse * const q);

    void parseDefineSuggesterResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DefineSuggesterResponse)
    Q_DISABLE_COPY(DefineSuggesterResponsePrivate)

};

} // namespace CloudSearch
} // namespace QtAws

#endif

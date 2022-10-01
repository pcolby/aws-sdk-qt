// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSEARCHSUGGESTIONSRESPONSE_P_H
#define QTAWS_GETSEARCHSUGGESTIONSRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class GetSearchSuggestionsResponse;

class GetSearchSuggestionsResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit GetSearchSuggestionsResponsePrivate(GetSearchSuggestionsResponse * const q);

    void parseGetSearchSuggestionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSearchSuggestionsResponse)
    Q_DISABLE_COPY(GetSearchSuggestionsResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif

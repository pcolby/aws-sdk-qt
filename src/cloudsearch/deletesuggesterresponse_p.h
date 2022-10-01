// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESUGGESTERRESPONSE_P_H
#define QTAWS_DELETESUGGESTERRESPONSE_P_H

#include "cloudsearchresponse_p.h"

namespace QtAws {
namespace CloudSearch {

class DeleteSuggesterResponse;

class DeleteSuggesterResponsePrivate : public CloudSearchResponsePrivate {

public:

    explicit DeleteSuggesterResponsePrivate(DeleteSuggesterResponse * const q);

    void parseDeleteSuggesterResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteSuggesterResponse)
    Q_DISABLE_COPY(DeleteSuggesterResponsePrivate)

};

} // namespace CloudSearch
} // namespace QtAws

#endif

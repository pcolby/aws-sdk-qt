// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETHOSTNAMESUGGESTIONRESPONSE_P_H
#define QTAWS_GETHOSTNAMESUGGESTIONRESPONSE_P_H

#include "opsworksresponse_p.h"

namespace QtAws {
namespace OpsWorks {

class GetHostnameSuggestionResponse;

class GetHostnameSuggestionResponsePrivate : public OpsWorksResponsePrivate {

public:

    explicit GetHostnameSuggestionResponsePrivate(GetHostnameSuggestionResponse * const q);

    void parseGetHostnameSuggestionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetHostnameSuggestionResponse)
    Q_DISABLE_COPY(GetHostnameSuggestionResponsePrivate)

};

} // namespace OpsWorks
} // namespace QtAws

#endif

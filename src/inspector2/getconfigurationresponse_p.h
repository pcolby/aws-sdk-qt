// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONFIGURATIONRESPONSE_P_H
#define QTAWS_GETCONFIGURATIONRESPONSE_P_H

#include "inspector2response_p.h"

namespace QtAws {
namespace Inspector2 {

class GetConfigurationResponse;

class GetConfigurationResponsePrivate : public Inspector2ResponsePrivate {

public:

    explicit GetConfigurationResponsePrivate(GetConfigurationResponse * const q);

    void parseGetConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetConfigurationResponse)
    Q_DISABLE_COPY(GetConfigurationResponsePrivate)

};

} // namespace Inspector2
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUBLISHAPPVERSIONRESPONSE_P_H
#define QTAWS_PUBLISHAPPVERSIONRESPONSE_P_H

#include "resiliencehubresponse_p.h"

namespace QtAws {
namespace ResilienceHub {

class PublishAppVersionResponse;

class PublishAppVersionResponsePrivate : public ResilienceHubResponsePrivate {

public:

    explicit PublishAppVersionResponsePrivate(PublishAppVersionResponse * const q);

    void parsePublishAppVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PublishAppVersionResponse)
    Q_DISABLE_COPY(PublishAppVersionResponsePrivate)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDDRAFTAPPVERSIONRESOURCEMAPPINGSRESPONSE_P_H
#define QTAWS_ADDDRAFTAPPVERSIONRESOURCEMAPPINGSRESPONSE_P_H

#include "resiliencehubresponse_p.h"

namespace QtAws {
namespace ResilienceHub {

class AddDraftAppVersionResourceMappingsResponse;

class AddDraftAppVersionResourceMappingsResponsePrivate : public ResilienceHubResponsePrivate {

public:

    explicit AddDraftAppVersionResourceMappingsResponsePrivate(AddDraftAppVersionResourceMappingsResponse * const q);

    void parseAddDraftAppVersionResourceMappingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AddDraftAppVersionResourceMappingsResponse)
    Q_DISABLE_COPY(AddDraftAppVersionResourceMappingsResponsePrivate)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif

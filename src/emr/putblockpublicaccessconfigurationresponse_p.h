// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBLOCKPUBLICACCESSCONFIGURATIONRESPONSE_P_H
#define QTAWS_PUTBLOCKPUBLICACCESSCONFIGURATIONRESPONSE_P_H

#include "emrresponse_p.h"

namespace QtAws {
namespace Emr {

class PutBlockPublicAccessConfigurationResponse;

class PutBlockPublicAccessConfigurationResponsePrivate : public EmrResponsePrivate {

public:

    explicit PutBlockPublicAccessConfigurationResponsePrivate(PutBlockPublicAccessConfigurationResponse * const q);

    void parsePutBlockPublicAccessConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutBlockPublicAccessConfigurationResponse)
    Q_DISABLE_COPY(PutBlockPublicAccessConfigurationResponsePrivate)

};

} // namespace Emr
} // namespace QtAws

#endif

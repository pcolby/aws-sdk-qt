// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESAMLPROVIDERRESPONSE_P_H
#define QTAWS_UPDATESAMLPROVIDERRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class UpdateSAMLProviderResponse;

class UpdateSAMLProviderResponsePrivate : public IamResponsePrivate {

public:

    explicit UpdateSAMLProviderResponsePrivate(UpdateSAMLProviderResponse * const q);

    void parseUpdateSAMLProviderResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateSAMLProviderResponse)
    Q_DISABLE_COPY(UpdateSAMLProviderResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif

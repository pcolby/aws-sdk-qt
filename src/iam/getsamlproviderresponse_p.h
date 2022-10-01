// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSAMLPROVIDERRESPONSE_P_H
#define QTAWS_GETSAMLPROVIDERRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class GetSAMLProviderResponse;

class GetSAMLProviderResponsePrivate : public IamResponsePrivate {

public:

    explicit GetSAMLProviderResponsePrivate(GetSAMLProviderResponse * const q);

    void parseGetSAMLProviderResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSAMLProviderResponse)
    Q_DISABLE_COPY(GetSAMLProviderResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif

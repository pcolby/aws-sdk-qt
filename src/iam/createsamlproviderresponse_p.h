// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESAMLPROVIDERRESPONSE_P_H
#define QTAWS_CREATESAMLPROVIDERRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class CreateSAMLProviderResponse;

class CreateSAMLProviderResponsePrivate : public IamResponsePrivate {

public:

    explicit CreateSAMLProviderResponsePrivate(CreateSAMLProviderResponse * const q);

    void parseCreateSAMLProviderResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateSAMLProviderResponse)
    Q_DISABLE_COPY(CreateSAMLProviderResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif

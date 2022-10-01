// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNTAGSAMLPROVIDERRESPONSE_P_H
#define QTAWS_UNTAGSAMLPROVIDERRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class UntagSAMLProviderResponse;

class UntagSAMLProviderResponsePrivate : public IamResponsePrivate {

public:

    explicit UntagSAMLProviderResponsePrivate(UntagSAMLProviderResponse * const q);

    void parseUntagSAMLProviderResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UntagSAMLProviderResponse)
    Q_DISABLE_COPY(UntagSAMLProviderResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif

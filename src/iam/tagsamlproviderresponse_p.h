// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TAGSAMLPROVIDERRESPONSE_P_H
#define QTAWS_TAGSAMLPROVIDERRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class TagSAMLProviderResponse;

class TagSAMLProviderResponsePrivate : public IamResponsePrivate {

public:

    explicit TagSAMLProviderResponsePrivate(TagSAMLProviderResponse * const q);

    void parseTagSAMLProviderResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(TagSAMLProviderResponse)
    Q_DISABLE_COPY(TagSAMLProviderResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif

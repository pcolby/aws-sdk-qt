// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESAMLPROVIDERRESPONSE_P_H
#define QTAWS_DELETESAMLPROVIDERRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class DeleteSAMLProviderResponse;

class DeleteSAMLProviderResponsePrivate : public IamResponsePrivate {

public:

    explicit DeleteSAMLProviderResponsePrivate(DeleteSAMLProviderResponse * const q);

    void parseDeleteSAMLProviderResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteSAMLProviderResponse)
    Q_DISABLE_COPY(DeleteSAMLProviderResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif

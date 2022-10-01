// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSAMLPROVIDERSRESPONSE_P_H
#define QTAWS_LISTSAMLPROVIDERSRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class ListSAMLProvidersResponse;

class ListSAMLProvidersResponsePrivate : public IamResponsePrivate {

public:

    explicit ListSAMLProvidersResponsePrivate(ListSAMLProvidersResponse * const q);

    void parseListSAMLProvidersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListSAMLProvidersResponse)
    Q_DISABLE_COPY(ListSAMLProvidersResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif

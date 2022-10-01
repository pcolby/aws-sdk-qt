// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSAMLPROVIDERTAGSRESPONSE_P_H
#define QTAWS_LISTSAMLPROVIDERTAGSRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class ListSAMLProviderTagsResponse;

class ListSAMLProviderTagsResponsePrivate : public IamResponsePrivate {

public:

    explicit ListSAMLProviderTagsResponsePrivate(ListSAMLProviderTagsResponse * const q);

    void parseListSAMLProviderTagsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListSAMLProviderTagsResponse)
    Q_DISABLE_COPY(ListSAMLProviderTagsResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSERVERCERTIFICATETAGSRESPONSE_P_H
#define QTAWS_LISTSERVERCERTIFICATETAGSRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class ListServerCertificateTagsResponse;

class ListServerCertificateTagsResponsePrivate : public IamResponsePrivate {

public:

    explicit ListServerCertificateTagsResponsePrivate(ListServerCertificateTagsResponse * const q);

    void parseListServerCertificateTagsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListServerCertificateTagsResponse)
    Q_DISABLE_COPY(ListServerCertificateTagsResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif

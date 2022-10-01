// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEALIASRESPONSE_P_H
#define QTAWS_ASSOCIATEALIASRESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class AssociateAliasResponse;

class AssociateAliasResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit AssociateAliasResponsePrivate(AssociateAliasResponse * const q);

    void parseAssociateAliasResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateAliasResponse)
    Q_DISABLE_COPY(AssociateAliasResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif

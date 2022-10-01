// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATES3RESOURCESRESPONSE_P_H
#define QTAWS_ASSOCIATES3RESOURCESRESPONSE_P_H

#include "macieresponse_p.h"

namespace QtAws {
namespace Macie {

class AssociateS3ResourcesResponse;

class AssociateS3ResourcesResponsePrivate : public MacieResponsePrivate {

public:

    explicit AssociateS3ResourcesResponsePrivate(AssociateS3ResourcesResponse * const q);

    void parseAssociateS3ResourcesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateS3ResourcesResponse)
    Q_DISABLE_COPY(AssociateS3ResourcesResponsePrivate)

};

} // namespace Macie
} // namespace QtAws

#endif

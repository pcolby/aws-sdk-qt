// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATES3RESOURCESRESPONSE_P_H
#define QTAWS_DISASSOCIATES3RESOURCESRESPONSE_P_H

#include "macieresponse_p.h"

namespace QtAws {
namespace Macie {

class DisassociateS3ResourcesResponse;

class DisassociateS3ResourcesResponsePrivate : public MacieResponsePrivate {

public:

    explicit DisassociateS3ResourcesResponsePrivate(DisassociateS3ResourcesResponse * const q);

    void parseDisassociateS3ResourcesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateS3ResourcesResponse)
    Q_DISABLE_COPY(DisassociateS3ResourcesResponsePrivate)

};

} // namespace Macie
} // namespace QtAws

#endif

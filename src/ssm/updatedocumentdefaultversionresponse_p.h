// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDOCUMENTDEFAULTVERSIONRESPONSE_P_H
#define QTAWS_UPDATEDOCUMENTDEFAULTVERSIONRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class UpdateDocumentDefaultVersionResponse;

class UpdateDocumentDefaultVersionResponsePrivate : public SsmResponsePrivate {

public:

    explicit UpdateDocumentDefaultVersionResponsePrivate(UpdateDocumentDefaultVersionResponse * const q);

    void parseUpdateDocumentDefaultVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateDocumentDefaultVersionResponse)
    Q_DISABLE_COPY(UpdateDocumentDefaultVersionResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif

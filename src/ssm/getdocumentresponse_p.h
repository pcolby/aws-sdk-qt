// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDOCUMENTRESPONSE_P_H
#define QTAWS_GETDOCUMENTRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class GetDocumentResponse;

class GetDocumentResponsePrivate : public SsmResponsePrivate {

public:

    explicit GetDocumentResponsePrivate(GetDocumentResponse * const q);

    void parseGetDocumentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDocumentResponse)
    Q_DISABLE_COPY(GetDocumentResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif

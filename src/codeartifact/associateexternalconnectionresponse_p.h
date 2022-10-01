// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEEXTERNALCONNECTIONRESPONSE_P_H
#define QTAWS_ASSOCIATEEXTERNALCONNECTIONRESPONSE_P_H

#include "codeartifactresponse_p.h"

namespace QtAws {
namespace CodeArtifact {

class AssociateExternalConnectionResponse;

class AssociateExternalConnectionResponsePrivate : public CodeArtifactResponsePrivate {

public:

    explicit AssociateExternalConnectionResponsePrivate(AssociateExternalConnectionResponse * const q);

    void parseAssociateExternalConnectionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateExternalConnectionResponse)
    Q_DISABLE_COPY(AssociateExternalConnectionResponsePrivate)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif

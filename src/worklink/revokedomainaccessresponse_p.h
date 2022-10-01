// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REVOKEDOMAINACCESSRESPONSE_P_H
#define QTAWS_REVOKEDOMAINACCESSRESPONSE_P_H

#include "worklinkresponse_p.h"

namespace QtAws {
namespace WorkLink {

class RevokeDomainAccessResponse;

class RevokeDomainAccessResponsePrivate : public WorkLinkResponsePrivate {

public:

    explicit RevokeDomainAccessResponsePrivate(RevokeDomainAccessResponse * const q);

    void parseRevokeDomainAccessResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RevokeDomainAccessResponse)
    Q_DISABLE_COPY(RevokeDomainAccessResponsePrivate)

};

} // namespace WorkLink
} // namespace QtAws

#endif

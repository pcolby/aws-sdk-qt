// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDOMAINMETADATARESPONSE_P_H
#define QTAWS_UPDATEDOMAINMETADATARESPONSE_P_H

#include "worklinkresponse_p.h"

namespace QtAws {
namespace WorkLink {

class UpdateDomainMetadataResponse;

class UpdateDomainMetadataResponsePrivate : public WorkLinkResponsePrivate {

public:

    explicit UpdateDomainMetadataResponsePrivate(UpdateDomainMetadataResponse * const q);

    void parseUpdateDomainMetadataResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateDomainMetadataResponse)
    Q_DISABLE_COPY(UpdateDomainMetadataResponsePrivate)

};

} // namespace WorkLink
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTOREDOMAINACCESSRESPONSE_P_H
#define QTAWS_RESTOREDOMAINACCESSRESPONSE_P_H

#include "worklinkresponse_p.h"

namespace QtAws {
namespace WorkLink {

class RestoreDomainAccessResponse;

class RestoreDomainAccessResponsePrivate : public WorkLinkResponsePrivate {

public:

    explicit RestoreDomainAccessResponsePrivate(RestoreDomainAccessResponse * const q);

    void parseRestoreDomainAccessResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RestoreDomainAccessResponse)
    Q_DISABLE_COPY(RestoreDomainAccessResponsePrivate)

};

} // namespace WorkLink
} // namespace QtAws

#endif

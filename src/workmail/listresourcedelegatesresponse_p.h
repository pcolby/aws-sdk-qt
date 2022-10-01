// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOURCEDELEGATESRESPONSE_P_H
#define QTAWS_LISTRESOURCEDELEGATESRESPONSE_P_H

#include "workmailresponse_p.h"

namespace QtAws {
namespace WorkMail {

class ListResourceDelegatesResponse;

class ListResourceDelegatesResponsePrivate : public WorkMailResponsePrivate {

public:

    explicit ListResourceDelegatesResponsePrivate(ListResourceDelegatesResponse * const q);

    void parseListResourceDelegatesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListResourceDelegatesResponse)
    Q_DISABLE_COPY(ListResourceDelegatesResponsePrivate)

};

} // namespace WorkMail
} // namespace QtAws

#endif

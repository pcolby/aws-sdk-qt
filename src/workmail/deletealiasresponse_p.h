// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEALIASRESPONSE_P_H
#define QTAWS_DELETEALIASRESPONSE_P_H

#include "workmailresponse_p.h"

namespace QtAws {
namespace WorkMail {

class DeleteAliasResponse;

class DeleteAliasResponsePrivate : public WorkMailResponsePrivate {

public:

    explicit DeleteAliasResponsePrivate(DeleteAliasResponse * const q);

    void parseDeleteAliasResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteAliasResponse)
    Q_DISABLE_COPY(DeleteAliasResponsePrivate)

};

} // namespace WorkMail
} // namespace QtAws

#endif

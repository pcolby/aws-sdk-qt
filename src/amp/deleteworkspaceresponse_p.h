// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWORKSPACERESPONSE_P_H
#define QTAWS_DELETEWORKSPACERESPONSE_P_H

#include "ampresponse_p.h"

namespace QtAws {
namespace Amp {

class DeleteWorkspaceResponse;

class DeleteWorkspaceResponsePrivate : public AmpResponsePrivate {

public:

    explicit DeleteWorkspaceResponsePrivate(DeleteWorkspaceResponse * const q);

    void parseDeleteWorkspaceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteWorkspaceResponse)
    Q_DISABLE_COPY(DeleteWorkspaceResponsePrivate)

};

} // namespace Amp
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERCLUSTERRESPONSE_P_H
#define QTAWS_REGISTERCLUSTERRESPONSE_P_H

#include "eksresponse_p.h"

namespace QtAws {
namespace Eks {

class RegisterClusterResponse;

class RegisterClusterResponsePrivate : public EksResponsePrivate {

public:

    explicit RegisterClusterResponsePrivate(RegisterClusterResponse * const q);

    void parseRegisterClusterResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RegisterClusterResponse)
    Q_DISABLE_COPY(RegisterClusterResponsePrivate)

};

} // namespace Eks
} // namespace QtAws

#endif

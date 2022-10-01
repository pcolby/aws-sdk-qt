// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECLUSTERRESPONSE_P_H
#define QTAWS_CREATECLUSTERRESPONSE_P_H

#include "daxresponse_p.h"

namespace QtAws {
namespace Dax {

class CreateClusterResponse;

class CreateClusterResponsePrivate : public DaxResponsePrivate {

public:

    explicit CreateClusterResponsePrivate(CreateClusterResponse * const q);

    void parseCreateClusterResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateClusterResponse)
    Q_DISABLE_COPY(CreateClusterResponsePrivate)

};

} // namespace Dax
} // namespace QtAws

#endif

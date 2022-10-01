// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATENODEGROUPRESPONSE_P_H
#define QTAWS_CREATENODEGROUPRESPONSE_P_H

#include "eksresponse_p.h"

namespace QtAws {
namespace Eks {

class CreateNodegroupResponse;

class CreateNodegroupResponsePrivate : public EksResponsePrivate {

public:

    explicit CreateNodegroupResponsePrivate(CreateNodegroupResponse * const q);

    void parseCreateNodegroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateNodegroupResponse)
    Q_DISABLE_COPY(CreateNodegroupResponsePrivate)

};

} // namespace Eks
} // namespace QtAws

#endif

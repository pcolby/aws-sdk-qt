// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENODEGROUPRESPONSE_P_H
#define QTAWS_DELETENODEGROUPRESPONSE_P_H

#include "eksresponse_p.h"

namespace QtAws {
namespace Eks {

class DeleteNodegroupResponse;

class DeleteNodegroupResponsePrivate : public EksResponsePrivate {

public:

    explicit DeleteNodegroupResponsePrivate(DeleteNodegroupResponse * const q);

    void parseDeleteNodegroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteNodegroupResponse)
    Q_DISABLE_COPY(DeleteNodegroupResponsePrivate)

};

} // namespace Eks
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOURCECOLLECTIONRESPONSE_P_H
#define QTAWS_GETRESOURCECOLLECTIONRESPONSE_P_H

#include "devopsgururesponse_p.h"

namespace QtAws {
namespace DevOpsGuru {

class GetResourceCollectionResponse;

class GetResourceCollectionResponsePrivate : public DevOpsGuruResponsePrivate {

public:

    explicit GetResourceCollectionResponsePrivate(GetResourceCollectionResponse * const q);

    void parseGetResourceCollectionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetResourceCollectionResponse)
    Q_DISABLE_COPY(GetResourceCollectionResponsePrivate)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERESOURCECOLLECTIONRESPONSE_P_H
#define QTAWS_UPDATERESOURCECOLLECTIONRESPONSE_P_H

#include "devopsgururesponse_p.h"

namespace QtAws {
namespace DevOpsGuru {

class UpdateResourceCollectionResponse;

class UpdateResourceCollectionResponsePrivate : public DevOpsGuruResponsePrivate {

public:

    explicit UpdateResourceCollectionResponsePrivate(UpdateResourceCollectionResponse * const q);

    void parseUpdateResourceCollectionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateResourceCollectionResponse)
    Q_DISABLE_COPY(UpdateResourceCollectionResponsePrivate)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif

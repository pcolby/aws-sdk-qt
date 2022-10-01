// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELOGINPROFILERESPONSE_P_H
#define QTAWS_DELETELOGINPROFILERESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class DeleteLoginProfileResponse;

class DeleteLoginProfileResponsePrivate : public IamResponsePrivate {

public:

    explicit DeleteLoginProfileResponsePrivate(DeleteLoginProfileResponse * const q);

    void parseDeleteLoginProfileResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteLoginProfileResponse)
    Q_DISABLE_COPY(DeleteLoginProfileResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif

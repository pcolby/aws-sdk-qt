// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEROLEDESCRIPTIONRESPONSE_P_H
#define QTAWS_UPDATEROLEDESCRIPTIONRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class UpdateRoleDescriptionResponse;

class UpdateRoleDescriptionResponsePrivate : public IamResponsePrivate {

public:

    explicit UpdateRoleDescriptionResponsePrivate(UpdateRoleDescriptionResponse * const q);

    void parseUpdateRoleDescriptionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateRoleDescriptionResponse)
    Q_DISABLE_COPY(UpdateRoleDescriptionResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif

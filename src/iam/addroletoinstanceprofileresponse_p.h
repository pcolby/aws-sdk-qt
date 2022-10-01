// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDROLETOINSTANCEPROFILERESPONSE_P_H
#define QTAWS_ADDROLETOINSTANCEPROFILERESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class AddRoleToInstanceProfileResponse;

class AddRoleToInstanceProfileResponsePrivate : public IamResponsePrivate {

public:

    explicit AddRoleToInstanceProfileResponsePrivate(AddRoleToInstanceProfileResponse * const q);

    void parseAddRoleToInstanceProfileResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AddRoleToInstanceProfileResponse)
    Q_DISABLE_COPY(AddRoleToInstanceProfileResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif

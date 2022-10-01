// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCESSKEYLASTUSEDRESPONSE_P_H
#define QTAWS_GETACCESSKEYLASTUSEDRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class GetAccessKeyLastUsedResponse;

class GetAccessKeyLastUsedResponsePrivate : public IamResponsePrivate {

public:

    explicit GetAccessKeyLastUsedResponsePrivate(GetAccessKeyLastUsedResponse * const q);

    void parseGetAccessKeyLastUsedResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAccessKeyLastUsedResponse)
    Q_DISABLE_COPY(GetAccessKeyLastUsedResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSERVICESPECIFICCREDENTIALSRESPONSE_P_H
#define QTAWS_LISTSERVICESPECIFICCREDENTIALSRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class ListServiceSpecificCredentialsResponse;

class ListServiceSpecificCredentialsResponsePrivate : public IamResponsePrivate {

public:

    explicit ListServiceSpecificCredentialsResponsePrivate(ListServiceSpecificCredentialsResponse * const q);

    void parseListServiceSpecificCredentialsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListServiceSpecificCredentialsResponse)
    Q_DISABLE_COPY(ListServiceSpecificCredentialsResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif

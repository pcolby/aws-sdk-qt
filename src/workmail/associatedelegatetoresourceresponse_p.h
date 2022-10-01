// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEDELEGATETORESOURCERESPONSE_P_H
#define QTAWS_ASSOCIATEDELEGATETORESOURCERESPONSE_P_H

#include "workmailresponse_p.h"

namespace QtAws {
namespace WorkMail {

class AssociateDelegateToResourceResponse;

class AssociateDelegateToResourceResponsePrivate : public WorkMailResponsePrivate {

public:

    explicit AssociateDelegateToResourceResponsePrivate(AssociateDelegateToResourceResponse * const q);

    void parseAssociateDelegateToResourceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateDelegateToResourceResponse)
    Q_DISABLE_COPY(AssociateDelegateToResourceResponsePrivate)

};

} // namespace WorkMail
} // namespace QtAws

#endif

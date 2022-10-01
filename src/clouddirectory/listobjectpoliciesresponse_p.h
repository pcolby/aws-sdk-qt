// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOBJECTPOLICIESRESPONSE_P_H
#define QTAWS_LISTOBJECTPOLICIESRESPONSE_P_H

#include "clouddirectoryresponse_p.h"

namespace QtAws {
namespace CloudDirectory {

class ListObjectPoliciesResponse;

class ListObjectPoliciesResponsePrivate : public CloudDirectoryResponsePrivate {

public:

    explicit ListObjectPoliciesResponsePrivate(ListObjectPoliciesResponse * const q);

    void parseListObjectPoliciesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListObjectPoliciesResponse)
    Q_DISABLE_COPY(ListObjectPoliciesResponsePrivate)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPOLICYATTACHMENTSRESPONSE_P_H
#define QTAWS_LISTPOLICYATTACHMENTSRESPONSE_P_H

#include "clouddirectoryresponse_p.h"

namespace QtAws {
namespace CloudDirectory {

class ListPolicyAttachmentsResponse;

class ListPolicyAttachmentsResponsePrivate : public CloudDirectoryResponsePrivate {

public:

    explicit ListPolicyAttachmentsResponsePrivate(ListPolicyAttachmentsResponse * const q);

    void parseListPolicyAttachmentsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListPolicyAttachmentsResponse)
    Q_DISABLE_COPY(ListPolicyAttachmentsResponsePrivate)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif

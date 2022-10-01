// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINSTANCEPROFILETAGSRESPONSE_P_H
#define QTAWS_LISTINSTANCEPROFILETAGSRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class ListInstanceProfileTagsResponse;

class ListInstanceProfileTagsResponsePrivate : public IamResponsePrivate {

public:

    explicit ListInstanceProfileTagsResponsePrivate(ListInstanceProfileTagsResponse * const q);

    void parseListInstanceProfileTagsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListInstanceProfileTagsResponse)
    Q_DISABLE_COPY(ListInstanceProfileTagsResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif

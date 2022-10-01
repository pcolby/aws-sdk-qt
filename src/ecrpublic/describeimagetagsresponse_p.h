// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIMAGETAGSRESPONSE_P_H
#define QTAWS_DESCRIBEIMAGETAGSRESPONSE_P_H

#include "ecrpublicresponse_p.h"

namespace QtAws {
namespace EcrPublic {

class DescribeImageTagsResponse;

class DescribeImageTagsResponsePrivate : public EcrPublicResponsePrivate {

public:

    explicit DescribeImageTagsResponsePrivate(DescribeImageTagsResponse * const q);

    void parseDescribeImageTagsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeImageTagsResponse)
    Q_DISABLE_COPY(DescribeImageTagsResponsePrivate)

};

} // namespace EcrPublic
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTOPICATTRIBUTESRESPONSE_P_H
#define QTAWS_GETTOPICATTRIBUTESRESPONSE_P_H

#include "snsresponse_p.h"

namespace QtAws {
namespace Sns {

class GetTopicAttributesResponse;

class GetTopicAttributesResponsePrivate : public SnsResponsePrivate {

public:

    explicit GetTopicAttributesResponsePrivate(GetTopicAttributesResponse * const q);

    void parseGetTopicAttributesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetTopicAttributesResponse)
    Q_DISABLE_COPY(GetTopicAttributesResponsePrivate)

};

} // namespace Sns
} // namespace QtAws

#endif

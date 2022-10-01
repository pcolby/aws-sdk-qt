// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETTOPICATTRIBUTESRESPONSE_P_H
#define QTAWS_SETTOPICATTRIBUTESRESPONSE_P_H

#include "snsresponse_p.h"

namespace QtAws {
namespace Sns {

class SetTopicAttributesResponse;

class SetTopicAttributesResponsePrivate : public SnsResponsePrivate {

public:

    explicit SetTopicAttributesResponsePrivate(SetTopicAttributesResponse * const q);

    void parseSetTopicAttributesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SetTopicAttributesResponse)
    Q_DISABLE_COPY(SetTopicAttributesResponsePrivate)

};

} // namespace Sns
} // namespace QtAws

#endif

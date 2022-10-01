// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETOPICRESPONSE_P_H
#define QTAWS_CREATETOPICRESPONSE_P_H

#include "snsresponse_p.h"

namespace QtAws {
namespace Sns {

class CreateTopicResponse;

class CreateTopicResponsePrivate : public SnsResponsePrivate {

public:

    explicit CreateTopicResponsePrivate(CreateTopicResponse * const q);

    void parseCreateTopicResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateTopicResponse)
    Q_DISABLE_COPY(CreateTopicResponsePrivate)

};

} // namespace Sns
} // namespace QtAws

#endif

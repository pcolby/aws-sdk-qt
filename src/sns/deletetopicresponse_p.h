// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETOPICRESPONSE_P_H
#define QTAWS_DELETETOPICRESPONSE_P_H

#include "snsresponse_p.h"

namespace QtAws {
namespace Sns {

class DeleteTopicResponse;

class DeleteTopicResponsePrivate : public SnsResponsePrivate {

public:

    explicit DeleteTopicResponsePrivate(DeleteTopicResponse * const q);

    void parseDeleteTopicResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteTopicResponse)
    Q_DISABLE_COPY(DeleteTopicResponsePrivate)

};

} // namespace Sns
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEHITRESPONSE_P_H
#define QTAWS_DELETEHITRESPONSE_P_H

#include "mturkresponse_p.h"

namespace QtAws {
namespace MTurk {

class DeleteHITResponse;

class DeleteHITResponsePrivate : public MTurkResponsePrivate {

public:

    explicit DeleteHITResponsePrivate(DeleteHITResponse * const q);

    void parseDeleteHITResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteHITResponse)
    Q_DISABLE_COPY(DeleteHITResponsePrivate)

};

} // namespace MTurk
} // namespace QtAws

#endif

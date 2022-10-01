// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEQUALIFICATIONTYPERESPONSE_P_H
#define QTAWS_DELETEQUALIFICATIONTYPERESPONSE_P_H

#include "mturkresponse_p.h"

namespace QtAws {
namespace MTurk {

class DeleteQualificationTypeResponse;

class DeleteQualificationTypeResponsePrivate : public MTurkResponsePrivate {

public:

    explicit DeleteQualificationTypeResponsePrivate(DeleteQualificationTypeResponse * const q);

    void parseDeleteQualificationTypeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteQualificationTypeResponse)
    Q_DISABLE_COPY(DeleteQualificationTypeResponsePrivate)

};

} // namespace MTurk
} // namespace QtAws

#endif

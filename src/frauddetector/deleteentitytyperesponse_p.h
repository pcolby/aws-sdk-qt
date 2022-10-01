// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEENTITYTYPERESPONSE_P_H
#define QTAWS_DELETEENTITYTYPERESPONSE_P_H

#include "frauddetectorresponse_p.h"

namespace QtAws {
namespace FraudDetector {

class DeleteEntityTypeResponse;

class DeleteEntityTypeResponsePrivate : public FraudDetectorResponsePrivate {

public:

    explicit DeleteEntityTypeResponsePrivate(DeleteEntityTypeResponse * const q);

    void parseDeleteEntityTypeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteEntityTypeResponse)
    Q_DISABLE_COPY(DeleteEntityTypeResponsePrivate)

};

} // namespace FraudDetector
} // namespace QtAws

#endif

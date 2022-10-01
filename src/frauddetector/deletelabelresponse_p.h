// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELABELRESPONSE_P_H
#define QTAWS_DELETELABELRESPONSE_P_H

#include "frauddetectorresponse_p.h"

namespace QtAws {
namespace FraudDetector {

class DeleteLabelResponse;

class DeleteLabelResponsePrivate : public FraudDetectorResponsePrivate {

public:

    explicit DeleteLabelResponsePrivate(DeleteLabelResponse * const q);

    void parseDeleteLabelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteLabelResponse)
    Q_DISABLE_COPY(DeleteLabelResponsePrivate)

};

} // namespace FraudDetector
} // namespace QtAws

#endif

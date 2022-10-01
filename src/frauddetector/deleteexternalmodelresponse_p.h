// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEXTERNALMODELRESPONSE_P_H
#define QTAWS_DELETEEXTERNALMODELRESPONSE_P_H

#include "frauddetectorresponse_p.h"

namespace QtAws {
namespace FraudDetector {

class DeleteExternalModelResponse;

class DeleteExternalModelResponsePrivate : public FraudDetectorResponsePrivate {

public:

    explicit DeleteExternalModelResponsePrivate(DeleteExternalModelResponse * const q);

    void parseDeleteExternalModelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteExternalModelResponse)
    Q_DISABLE_COPY(DeleteExternalModelResponsePrivate)

};

} // namespace FraudDetector
} // namespace QtAws

#endif

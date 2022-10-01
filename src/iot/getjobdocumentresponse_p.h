// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETJOBDOCUMENTRESPONSE_P_H
#define QTAWS_GETJOBDOCUMENTRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class GetJobDocumentResponse;

class GetJobDocumentResponsePrivate : public IoTResponsePrivate {

public:

    explicit GetJobDocumentResponsePrivate(GetJobDocumentResponse * const q);

    void parseGetJobDocumentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetJobDocumentResponse)
    Q_DISABLE_COPY(GetJobDocumentResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif

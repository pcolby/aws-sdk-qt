// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RECORDHANDLERPROGRESSRESPONSE_P_H
#define QTAWS_RECORDHANDLERPROGRESSRESPONSE_P_H

#include "cloudformationresponse_p.h"

namespace QtAws {
namespace CloudFormation {

class RecordHandlerProgressResponse;

class RecordHandlerProgressResponsePrivate : public CloudFormationResponsePrivate {

public:

    explicit RecordHandlerProgressResponsePrivate(RecordHandlerProgressResponse * const q);

    void parseRecordHandlerProgressResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RecordHandlerProgressResponse)
    Q_DISABLE_COPY(RecordHandlerProgressResponsePrivate)

};

} // namespace CloudFormation
} // namespace QtAws

#endif

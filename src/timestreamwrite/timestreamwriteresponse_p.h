// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TIMESTREAMWRITERESPONSE_P_H
#define QTAWS_TIMESTREAMWRITERESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace TimestreamWrite {

class TimestreamWriteResponse;

class TimestreamWriteResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit TimestreamWriteResponsePrivate(TimestreamWriteResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(TimestreamWriteResponse)
    Q_DISABLE_COPY(TimestreamWriteResponsePrivate)

};

} // namespace TimestreamWrite
} // namespace QtAws

#endif

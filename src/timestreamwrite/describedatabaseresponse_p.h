// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDATABASERESPONSE_P_H
#define QTAWS_DESCRIBEDATABASERESPONSE_P_H

#include "timestreamwriteresponse_p.h"

namespace QtAws {
namespace TimestreamWrite {

class DescribeDatabaseResponse;

class DescribeDatabaseResponsePrivate : public TimestreamWriteResponsePrivate {

public:

    explicit DescribeDatabaseResponsePrivate(DescribeDatabaseResponse * const q);

    void parseDescribeDatabaseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDatabaseResponse)
    Q_DISABLE_COPY(DescribeDatabaseResponsePrivate)

};

} // namespace TimestreamWrite
} // namespace QtAws

#endif

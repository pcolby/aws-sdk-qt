// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDATABASERESPONSE_H
#define QTAWS_DESCRIBEDATABASERESPONSE_H

#include "timestreamwriteresponse.h"
#include "describedatabaserequest.h"

namespace QtAws {
namespace TimestreamWrite {

class DescribeDatabaseResponsePrivate;

class QTAWSTIMESTREAMWRITE_EXPORT DescribeDatabaseResponse : public TimestreamWriteResponse {
    Q_OBJECT

public:
    DescribeDatabaseResponse(const DescribeDatabaseRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDatabaseRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDatabaseResponse)
    Q_DISABLE_COPY(DescribeDatabaseResponse)

};

} // namespace TimestreamWrite
} // namespace QtAws

#endif

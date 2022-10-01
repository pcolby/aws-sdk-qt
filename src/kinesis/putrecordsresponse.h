// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTRECORDSRESPONSE_H
#define QTAWS_PUTRECORDSRESPONSE_H

#include "kinesisresponse.h"
#include "putrecordsrequest.h"

namespace QtAws {
namespace Kinesis {

class PutRecordsResponsePrivate;

class QTAWSKINESIS_EXPORT PutRecordsResponse : public KinesisResponse {
    Q_OBJECT

public:
    PutRecordsResponse(const PutRecordsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutRecordsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutRecordsResponse)
    Q_DISABLE_COPY(PutRecordsResponse)

};

} // namespace Kinesis
} // namespace QtAws

#endif

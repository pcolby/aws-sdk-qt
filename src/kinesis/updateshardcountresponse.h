// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESHARDCOUNTRESPONSE_H
#define QTAWS_UPDATESHARDCOUNTRESPONSE_H

#include "kinesisresponse.h"
#include "updateshardcountrequest.h"

namespace QtAws {
namespace Kinesis {

class UpdateShardCountResponsePrivate;

class QTAWSKINESIS_EXPORT UpdateShardCountResponse : public KinesisResponse {
    Q_OBJECT

public:
    UpdateShardCountResponse(const UpdateShardCountRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateShardCountRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateShardCountResponse)
    Q_DISABLE_COPY(UpdateShardCountResponse)

};

} // namespace Kinesis
} // namespace QtAws

#endif

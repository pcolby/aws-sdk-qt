// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESTREAMMODERESPONSE_H
#define QTAWS_UPDATESTREAMMODERESPONSE_H

#include "kinesisresponse.h"
#include "updatestreammoderequest.h"

namespace QtAws {
namespace Kinesis {

class UpdateStreamModeResponsePrivate;

class QTAWSKINESIS_EXPORT UpdateStreamModeResponse : public KinesisResponse {
    Q_OBJECT

public:
    UpdateStreamModeResponse(const UpdateStreamModeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateStreamModeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateStreamModeResponse)
    Q_DISABLE_COPY(UpdateStreamModeResponse)

};

} // namespace Kinesis
} // namespace QtAws

#endif

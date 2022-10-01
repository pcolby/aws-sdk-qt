// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYACTIVITYSTREAMRESPONSE_H
#define QTAWS_MODIFYACTIVITYSTREAMRESPONSE_H

#include "rdsresponse.h"
#include "modifyactivitystreamrequest.h"

namespace QtAws {
namespace Rds {

class ModifyActivityStreamResponsePrivate;

class QTAWSRDS_EXPORT ModifyActivityStreamResponse : public RdsResponse {
    Q_OBJECT

public:
    ModifyActivityStreamResponse(const ModifyActivityStreamRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyActivityStreamRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyActivityStreamResponse)
    Q_DISABLE_COPY(ModifyActivityStreamResponse)

};

} // namespace Rds
} // namespace QtAws

#endif

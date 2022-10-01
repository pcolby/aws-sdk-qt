// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDELETEWORLDSRESPONSE_H
#define QTAWS_BATCHDELETEWORLDSRESPONSE_H

#include "robomakerresponse.h"
#include "batchdeleteworldsrequest.h"

namespace QtAws {
namespace RoboMaker {

class BatchDeleteWorldsResponsePrivate;

class QTAWSROBOMAKER_EXPORT BatchDeleteWorldsResponse : public RoboMakerResponse {
    Q_OBJECT

public:
    BatchDeleteWorldsResponse(const BatchDeleteWorldsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchDeleteWorldsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchDeleteWorldsResponse)
    Q_DISABLE_COPY(BatchDeleteWorldsResponse)

};

} // namespace RoboMaker
} // namespace QtAws

#endif

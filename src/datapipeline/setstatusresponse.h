// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETSTATUSRESPONSE_H
#define QTAWS_SETSTATUSRESPONSE_H

#include "datapipelineresponse.h"
#include "setstatusrequest.h"

namespace QtAws {
namespace DataPipeline {

class SetStatusResponsePrivate;

class QTAWSDATAPIPELINE_EXPORT SetStatusResponse : public DataPipelineResponse {
    Q_OBJECT

public:
    SetStatusResponse(const SetStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SetStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetStatusResponse)
    Q_DISABLE_COPY(SetStatusResponse)

};

} // namespace DataPipeline
} // namespace QtAws

#endif

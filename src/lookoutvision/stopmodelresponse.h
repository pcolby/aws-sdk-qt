// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPMODELRESPONSE_H
#define QTAWS_STOPMODELRESPONSE_H

#include "lookoutvisionresponse.h"
#include "stopmodelrequest.h"

namespace QtAws {
namespace LookoutVision {

class StopModelResponsePrivate;

class QTAWSLOOKOUTVISION_EXPORT StopModelResponse : public LookoutVisionResponse {
    Q_OBJECT

public:
    StopModelResponse(const StopModelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopModelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopModelResponse)
    Q_DISABLE_COPY(StopModelResponse)

};

} // namespace LookoutVision
} // namespace QtAws

#endif

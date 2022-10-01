// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTMODELRESPONSE_H
#define QTAWS_STARTMODELRESPONSE_H

#include "lookoutvisionresponse.h"
#include "startmodelrequest.h"

namespace QtAws {
namespace LookoutVision {

class StartModelResponsePrivate;

class QTAWSLOOKOUTVISION_EXPORT StartModelResponse : public LookoutVisionResponse {
    Q_OBJECT

public:
    StartModelResponse(const StartModelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartModelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartModelResponse)
    Q_DISABLE_COPY(StartModelResponse)

};

} // namespace LookoutVision
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTAGEDEVICESRESPONSE_H
#define QTAWS_LISTSTAGEDEVICESRESPONSE_H

#include "sagemakerresponse.h"
#include "liststagedevicesrequest.h"

namespace QtAws {
namespace SageMaker {

class ListStageDevicesResponsePrivate;

class QTAWSSAGEMAKER_EXPORT ListStageDevicesResponse : public SageMakerResponse {
    Q_OBJECT

public:
    ListStageDevicesResponse(const ListStageDevicesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListStageDevicesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListStageDevicesResponse)
    Q_DISABLE_COPY(ListStageDevicesResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif

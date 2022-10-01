// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEVICESRESPONSE_H
#define QTAWS_LISTDEVICESRESPONSE_H

#include "sagemakerresponse.h"
#include "listdevicesrequest.h"

namespace QtAws {
namespace SageMaker {

class ListDevicesResponsePrivate;

class QTAWSSAGEMAKER_EXPORT ListDevicesResponse : public SageMakerResponse {
    Q_OBJECT

public:
    ListDevicesResponse(const ListDevicesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDevicesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDevicesResponse)
    Q_DISABLE_COPY(ListDevicesResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif

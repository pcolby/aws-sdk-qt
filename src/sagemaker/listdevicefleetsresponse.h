// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEVICEFLEETSRESPONSE_H
#define QTAWS_LISTDEVICEFLEETSRESPONSE_H

#include "sagemakerresponse.h"
#include "listdevicefleetsrequest.h"

namespace QtAws {
namespace SageMaker {

class ListDeviceFleetsResponsePrivate;

class QTAWSSAGEMAKER_EXPORT ListDeviceFleetsResponse : public SageMakerResponse {
    Q_OBJECT

public:
    ListDeviceFleetsResponse(const ListDeviceFleetsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDeviceFleetsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDeviceFleetsResponse)
    Q_DISABLE_COPY(ListDeviceFleetsResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif

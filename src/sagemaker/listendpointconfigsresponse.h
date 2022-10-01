// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENDPOINTCONFIGSRESPONSE_H
#define QTAWS_LISTENDPOINTCONFIGSRESPONSE_H

#include "sagemakerresponse.h"
#include "listendpointconfigsrequest.h"

namespace QtAws {
namespace SageMaker {

class ListEndpointConfigsResponsePrivate;

class QTAWSSAGEMAKER_EXPORT ListEndpointConfigsResponse : public SageMakerResponse {
    Q_OBJECT

public:
    ListEndpointConfigsResponse(const ListEndpointConfigsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListEndpointConfigsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListEndpointConfigsResponse)
    Q_DISABLE_COPY(ListEndpointConfigsResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif

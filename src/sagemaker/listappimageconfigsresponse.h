// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPIMAGECONFIGSRESPONSE_H
#define QTAWS_LISTAPPIMAGECONFIGSRESPONSE_H

#include "sagemakerresponse.h"
#include "listappimageconfigsrequest.h"

namespace QtAws {
namespace SageMaker {

class ListAppImageConfigsResponsePrivate;

class QTAWSSAGEMAKER_EXPORT ListAppImageConfigsResponse : public SageMakerResponse {
    Q_OBJECT

public:
    ListAppImageConfigsResponse(const ListAppImageConfigsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAppImageConfigsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAppImageConfigsResponse)
    Q_DISABLE_COPY(ListAppImageConfigsResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif

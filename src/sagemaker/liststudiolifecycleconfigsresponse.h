// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTUDIOLIFECYCLECONFIGSRESPONSE_H
#define QTAWS_LISTSTUDIOLIFECYCLECONFIGSRESPONSE_H

#include "sagemakerresponse.h"
#include "liststudiolifecycleconfigsrequest.h"

namespace QtAws {
namespace SageMaker {

class ListStudioLifecycleConfigsResponsePrivate;

class QTAWSSAGEMAKER_EXPORT ListStudioLifecycleConfigsResponse : public SageMakerResponse {
    Q_OBJECT

public:
    ListStudioLifecycleConfigsResponse(const ListStudioLifecycleConfigsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListStudioLifecycleConfigsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListStudioLifecycleConfigsResponse)
    Q_DISABLE_COPY(ListStudioLifecycleConfigsResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif

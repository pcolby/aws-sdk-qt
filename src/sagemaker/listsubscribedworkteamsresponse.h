// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSUBSCRIBEDWORKTEAMSRESPONSE_H
#define QTAWS_LISTSUBSCRIBEDWORKTEAMSRESPONSE_H

#include "sagemakerresponse.h"
#include "listsubscribedworkteamsrequest.h"

namespace QtAws {
namespace SageMaker {

class ListSubscribedWorkteamsResponsePrivate;

class QTAWSSAGEMAKER_EXPORT ListSubscribedWorkteamsResponse : public SageMakerResponse {
    Q_OBJECT

public:
    ListSubscribedWorkteamsResponse(const ListSubscribedWorkteamsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListSubscribedWorkteamsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSubscribedWorkteamsResponse)
    Q_DISABLE_COPY(ListSubscribedWorkteamsResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif

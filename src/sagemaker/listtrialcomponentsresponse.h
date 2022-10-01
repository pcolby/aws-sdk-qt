// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTRIALCOMPONENTSRESPONSE_H
#define QTAWS_LISTTRIALCOMPONENTSRESPONSE_H

#include "sagemakerresponse.h"
#include "listtrialcomponentsrequest.h"

namespace QtAws {
namespace SageMaker {

class ListTrialComponentsResponsePrivate;

class QTAWSSAGEMAKER_EXPORT ListTrialComponentsResponse : public SageMakerResponse {
    Q_OBJECT

public:
    ListTrialComponentsResponse(const ListTrialComponentsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListTrialComponentsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTrialComponentsResponse)
    Q_DISABLE_COPY(ListTrialComponentsResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif

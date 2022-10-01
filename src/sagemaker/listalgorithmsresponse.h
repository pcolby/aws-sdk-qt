// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTALGORITHMSRESPONSE_H
#define QTAWS_LISTALGORITHMSRESPONSE_H

#include "sagemakerresponse.h"
#include "listalgorithmsrequest.h"

namespace QtAws {
namespace SageMaker {

class ListAlgorithmsResponsePrivate;

class QTAWSSAGEMAKER_EXPORT ListAlgorithmsResponse : public SageMakerResponse {
    Q_OBJECT

public:
    ListAlgorithmsResponse(const ListAlgorithmsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAlgorithmsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAlgorithmsResponse)
    Q_DISABLE_COPY(ListAlgorithmsResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif

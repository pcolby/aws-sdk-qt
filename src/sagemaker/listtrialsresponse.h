// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTRIALSRESPONSE_H
#define QTAWS_LISTTRIALSRESPONSE_H

#include "sagemakerresponse.h"
#include "listtrialsrequest.h"

namespace QtAws {
namespace SageMaker {

class ListTrialsResponsePrivate;

class QTAWSSAGEMAKER_EXPORT ListTrialsResponse : public SageMakerResponse {
    Q_OBJECT

public:
    ListTrialsResponse(const ListTrialsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListTrialsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTrialsResponse)
    Q_DISABLE_COPY(ListTrialsResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif

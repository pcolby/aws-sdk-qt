// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCANDIDATESFORAUTOMLJOBRESPONSE_H
#define QTAWS_LISTCANDIDATESFORAUTOMLJOBRESPONSE_H

#include "sagemakerresponse.h"
#include "listcandidatesforautomljobrequest.h"

namespace QtAws {
namespace SageMaker {

class ListCandidatesForAutoMLJobResponsePrivate;

class QTAWSSAGEMAKER_EXPORT ListCandidatesForAutoMLJobResponse : public SageMakerResponse {
    Q_OBJECT

public:
    ListCandidatesForAutoMLJobResponse(const ListCandidatesForAutoMLJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListCandidatesForAutoMLJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCandidatesForAutoMLJobResponse)
    Q_DISABLE_COPY(ListCandidatesForAutoMLJobResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif

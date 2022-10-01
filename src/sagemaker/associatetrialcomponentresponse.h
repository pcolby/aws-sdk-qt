// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATETRIALCOMPONENTRESPONSE_H
#define QTAWS_ASSOCIATETRIALCOMPONENTRESPONSE_H

#include "sagemakerresponse.h"
#include "associatetrialcomponentrequest.h"

namespace QtAws {
namespace SageMaker {

class AssociateTrialComponentResponsePrivate;

class QTAWSSAGEMAKER_EXPORT AssociateTrialComponentResponse : public SageMakerResponse {
    Q_OBJECT

public:
    AssociateTrialComponentResponse(const AssociateTrialComponentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateTrialComponentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateTrialComponentResponse)
    Q_DISABLE_COPY(AssociateTrialComponentResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif

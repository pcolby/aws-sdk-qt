// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESOLUTIONRESPONSE_H
#define QTAWS_CREATESOLUTIONRESPONSE_H

#include "personalizeresponse.h"
#include "createsolutionrequest.h"

namespace QtAws {
namespace Personalize {

class CreateSolutionResponsePrivate;

class QTAWSPERSONALIZE_EXPORT CreateSolutionResponse : public PersonalizeResponse {
    Q_OBJECT

public:
    CreateSolutionResponse(const CreateSolutionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateSolutionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSolutionResponse)
    Q_DISABLE_COPY(CreateSolutionResponse)

};

} // namespace Personalize
} // namespace QtAws

#endif

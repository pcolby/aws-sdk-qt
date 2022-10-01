// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEXPERIENCERESPONSE_H
#define QTAWS_CREATEEXPERIENCERESPONSE_H

#include "kendraresponse.h"
#include "createexperiencerequest.h"

namespace QtAws {
namespace Kendra {

class CreateExperienceResponsePrivate;

class QTAWSKENDRA_EXPORT CreateExperienceResponse : public KendraResponse {
    Q_OBJECT

public:
    CreateExperienceResponse(const CreateExperienceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateExperienceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateExperienceResponse)
    Q_DISABLE_COPY(CreateExperienceResponse)

};

} // namespace Kendra
} // namespace QtAws

#endif

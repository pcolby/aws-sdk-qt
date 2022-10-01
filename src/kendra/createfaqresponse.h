// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFAQRESPONSE_H
#define QTAWS_CREATEFAQRESPONSE_H

#include "kendraresponse.h"
#include "createfaqrequest.h"

namespace QtAws {
namespace Kendra {

class CreateFaqResponsePrivate;

class QTAWSKENDRA_EXPORT CreateFaqResponse : public KendraResponse {
    Q_OBJECT

public:
    CreateFaqResponse(const CreateFaqRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateFaqRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateFaqResponse)
    Q_DISABLE_COPY(CreateFaqResponse)

};

} // namespace Kendra
} // namespace QtAws

#endif

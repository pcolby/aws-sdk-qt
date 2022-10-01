// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEEXPERIENCERESPONSE_H
#define QTAWS_UPDATEEXPERIENCERESPONSE_H

#include "kendraresponse.h"
#include "updateexperiencerequest.h"

namespace QtAws {
namespace Kendra {

class UpdateExperienceResponsePrivate;

class QTAWSKENDRA_EXPORT UpdateExperienceResponse : public KendraResponse {
    Q_OBJECT

public:
    UpdateExperienceResponse(const UpdateExperienceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateExperienceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateExperienceResponse)
    Q_DISABLE_COPY(UpdateExperienceResponse)

};

} // namespace Kendra
} // namespace QtAws

#endif

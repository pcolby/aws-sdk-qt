// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEXPERIENCERESPONSE_H
#define QTAWS_DELETEEXPERIENCERESPONSE_H

#include "kendraresponse.h"
#include "deleteexperiencerequest.h"

namespace QtAws {
namespace Kendra {

class DeleteExperienceResponsePrivate;

class QTAWSKENDRA_EXPORT DeleteExperienceResponse : public KendraResponse {
    Q_OBJECT

public:
    DeleteExperienceResponse(const DeleteExperienceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteExperienceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteExperienceResponse)
    Q_DISABLE_COPY(DeleteExperienceResponse)

};

} // namespace Kendra
} // namespace QtAws

#endif

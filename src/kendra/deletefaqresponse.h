// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFAQRESPONSE_H
#define QTAWS_DELETEFAQRESPONSE_H

#include "kendraresponse.h"
#include "deletefaqrequest.h"

namespace QtAws {
namespace Kendra {

class DeleteFaqResponsePrivate;

class QTAWSKENDRA_EXPORT DeleteFaqResponse : public KendraResponse {
    Q_OBJECT

public:
    DeleteFaqResponse(const DeleteFaqRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteFaqRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteFaqResponse)
    Q_DISABLE_COPY(DeleteFaqResponse)

};

} // namespace Kendra
} // namespace QtAws

#endif

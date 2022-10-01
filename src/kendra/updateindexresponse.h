// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEINDEXRESPONSE_H
#define QTAWS_UPDATEINDEXRESPONSE_H

#include "kendraresponse.h"
#include "updateindexrequest.h"

namespace QtAws {
namespace Kendra {

class UpdateIndexResponsePrivate;

class QTAWSKENDRA_EXPORT UpdateIndexResponse : public KendraResponse {
    Q_OBJECT

public:
    UpdateIndexResponse(const UpdateIndexRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateIndexRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateIndexResponse)
    Q_DISABLE_COPY(UpdateIndexResponse)

};

} // namespace Kendra
} // namespace QtAws

#endif

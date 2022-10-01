// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONTENTRESPONSE_H
#define QTAWS_DELETECONTENTRESPONSE_H

#include "wisdomresponse.h"
#include "deletecontentrequest.h"

namespace QtAws {
namespace Wisdom {

class DeleteContentResponsePrivate;

class QTAWSWISDOM_EXPORT DeleteContentResponse : public WisdomResponse {
    Q_OBJECT

public:
    DeleteContentResponse(const DeleteContentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteContentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteContentResponse)
    Q_DISABLE_COPY(DeleteContentResponse)

};

} // namespace Wisdom
} // namespace QtAws

#endif

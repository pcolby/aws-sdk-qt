// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONTENTRESPONSE_H
#define QTAWS_UPDATECONTENTRESPONSE_H

#include "wisdomresponse.h"
#include "updatecontentrequest.h"

namespace QtAws {
namespace Wisdom {

class UpdateContentResponsePrivate;

class QTAWSWISDOM_EXPORT UpdateContentResponse : public WisdomResponse {
    Q_OBJECT

public:
    UpdateContentResponse(const UpdateContentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateContentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateContentResponse)
    Q_DISABLE_COPY(UpdateContentResponse)

};

} // namespace Wisdom
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTENTRESPONSE_H
#define QTAWS_GETCONTENTRESPONSE_H

#include "wisdomresponse.h"
#include "getcontentrequest.h"

namespace QtAws {
namespace Wisdom {

class GetContentResponsePrivate;

class QTAWSWISDOM_EXPORT GetContentResponse : public WisdomResponse {
    Q_OBJECT

public:
    GetContentResponse(const GetContentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetContentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetContentResponse)
    Q_DISABLE_COPY(GetContentResponse)

};

} // namespace Wisdom
} // namespace QtAws

#endif

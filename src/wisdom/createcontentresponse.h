// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONTENTRESPONSE_H
#define QTAWS_CREATECONTENTRESPONSE_H

#include "wisdomresponse.h"
#include "createcontentrequest.h"

namespace QtAws {
namespace Wisdom {

class CreateContentResponsePrivate;

class QTAWSWISDOM_EXPORT CreateContentResponse : public WisdomResponse {
    Q_OBJECT

public:
    CreateContentResponse(const CreateContentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateContentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateContentResponse)
    Q_DISABLE_COPY(CreateContentResponse)

};

} // namespace Wisdom
} // namespace QtAws

#endif

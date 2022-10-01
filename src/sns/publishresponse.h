// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUBLISHRESPONSE_H
#define QTAWS_PUBLISHRESPONSE_H

#include "snsresponse.h"
#include "publishrequest.h"

namespace QtAws {
namespace Sns {

class PublishResponsePrivate;

class QTAWSSNS_EXPORT PublishResponse : public SnsResponse {
    Q_OBJECT

public:
    PublishResponse(const PublishRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PublishRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PublishResponse)
    Q_DISABLE_COPY(PublishResponse)

};

} // namespace Sns
} // namespace QtAws

#endif

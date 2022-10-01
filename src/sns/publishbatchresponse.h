// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUBLISHBATCHRESPONSE_H
#define QTAWS_PUBLISHBATCHRESPONSE_H

#include "snsresponse.h"
#include "publishbatchrequest.h"

namespace QtAws {
namespace Sns {

class PublishBatchResponsePrivate;

class QTAWSSNS_EXPORT PublishBatchResponse : public SnsResponse {
    Q_OBJECT

public:
    PublishBatchResponse(const PublishBatchRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PublishBatchRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PublishBatchResponse)
    Q_DISABLE_COPY(PublishBatchResponse)

};

} // namespace Sns
} // namespace QtAws

#endif

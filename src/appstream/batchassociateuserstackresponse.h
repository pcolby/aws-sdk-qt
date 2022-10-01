// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHASSOCIATEUSERSTACKRESPONSE_H
#define QTAWS_BATCHASSOCIATEUSERSTACKRESPONSE_H

#include "appstreamresponse.h"
#include "batchassociateuserstackrequest.h"

namespace QtAws {
namespace AppStream {

class BatchAssociateUserStackResponsePrivate;

class QTAWSAPPSTREAM_EXPORT BatchAssociateUserStackResponse : public AppStreamResponse {
    Q_OBJECT

public:
    BatchAssociateUserStackResponse(const BatchAssociateUserStackRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchAssociateUserStackRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchAssociateUserStackResponse)
    Q_DISABLE_COPY(BatchAssociateUserStackResponse)

};

} // namespace AppStream
} // namespace QtAws

#endif

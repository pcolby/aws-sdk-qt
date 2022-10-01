// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDISASSOCIATEUSERSTACKRESPONSE_H
#define QTAWS_BATCHDISASSOCIATEUSERSTACKRESPONSE_H

#include "appstreamresponse.h"
#include "batchdisassociateuserstackrequest.h"

namespace QtAws {
namespace AppStream {

class BatchDisassociateUserStackResponsePrivate;

class QTAWSAPPSTREAM_EXPORT BatchDisassociateUserStackResponse : public AppStreamResponse {
    Q_OBJECT

public:
    BatchDisassociateUserStackResponse(const BatchDisassociateUserStackRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchDisassociateUserStackRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchDisassociateUserStackResponse)
    Q_DISABLE_COPY(BatchDisassociateUserStackResponse)

};

} // namespace AppStream
} // namespace QtAws

#endif

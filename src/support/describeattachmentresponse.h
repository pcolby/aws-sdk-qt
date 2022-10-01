// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEATTACHMENTRESPONSE_H
#define QTAWS_DESCRIBEATTACHMENTRESPONSE_H

#include "supportresponse.h"
#include "describeattachmentrequest.h"

namespace QtAws {
namespace Support {

class DescribeAttachmentResponsePrivate;

class QTAWSSUPPORT_EXPORT DescribeAttachmentResponse : public SupportResponse {
    Q_OBJECT

public:
    DescribeAttachmentResponse(const DescribeAttachmentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAttachmentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAttachmentResponse)
    Q_DISABLE_COPY(DescribeAttachmentResponse)

};

} // namespace Support
} // namespace QtAws

#endif

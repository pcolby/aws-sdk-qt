// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDOCUMENTRESPONSE_H
#define QTAWS_DESCRIBEDOCUMENTRESPONSE_H

#include "ssmresponse.h"
#include "describedocumentrequest.h"

namespace QtAws {
namespace Ssm {

class DescribeDocumentResponsePrivate;

class QTAWSSSM_EXPORT DescribeDocumentResponse : public SsmResponse {
    Q_OBJECT

public:
    DescribeDocumentResponse(const DescribeDocumentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDocumentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDocumentResponse)
    Q_DISABLE_COPY(DescribeDocumentResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif

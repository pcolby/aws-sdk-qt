// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDOCUMENTCLASSIFIERRESPONSE_H
#define QTAWS_DESCRIBEDOCUMENTCLASSIFIERRESPONSE_H

#include "comprehendresponse.h"
#include "describedocumentclassifierrequest.h"

namespace QtAws {
namespace Comprehend {

class DescribeDocumentClassifierResponsePrivate;

class QTAWSCOMPREHEND_EXPORT DescribeDocumentClassifierResponse : public ComprehendResponse {
    Q_OBJECT

public:
    DescribeDocumentClassifierResponse(const DescribeDocumentClassifierRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDocumentClassifierRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDocumentClassifierResponse)
    Q_DISABLE_COPY(DescribeDocumentClassifierResponse)

};

} // namespace Comprehend
} // namespace QtAws

#endif

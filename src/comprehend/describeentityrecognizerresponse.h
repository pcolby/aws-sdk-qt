// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENTITYRECOGNIZERRESPONSE_H
#define QTAWS_DESCRIBEENTITYRECOGNIZERRESPONSE_H

#include "comprehendresponse.h"
#include "describeentityrecognizerrequest.h"

namespace QtAws {
namespace Comprehend {

class DescribeEntityRecognizerResponsePrivate;

class QTAWSCOMPREHEND_EXPORT DescribeEntityRecognizerResponse : public ComprehendResponse {
    Q_OBJECT

public:
    DescribeEntityRecognizerResponse(const DescribeEntityRecognizerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeEntityRecognizerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEntityRecognizerResponse)
    Q_DISABLE_COPY(DescribeEntityRecognizerResponse)

};

} // namespace Comprehend
} // namespace QtAws

#endif

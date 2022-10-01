// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEHSMRESPONSE_H
#define QTAWS_DESCRIBEHSMRESPONSE_H

#include "cloudhsmresponse.h"
#include "describehsmrequest.h"

namespace QtAws {
namespace CloudHsm {

class DescribeHsmResponsePrivate;

class QTAWSCLOUDHSM_EXPORT DescribeHsmResponse : public CloudHsmResponse {
    Q_OBJECT

public:
    DescribeHsmResponse(const DescribeHsmRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeHsmRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeHsmResponse)
    Q_DISABLE_COPY(DescribeHsmResponse)

};

} // namespace CloudHsm
} // namespace QtAws

#endif

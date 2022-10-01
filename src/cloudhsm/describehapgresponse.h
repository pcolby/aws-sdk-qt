// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEHAPGRESPONSE_H
#define QTAWS_DESCRIBEHAPGRESPONSE_H

#include "cloudhsmresponse.h"
#include "describehapgrequest.h"

namespace QtAws {
namespace CloudHsm {

class DescribeHapgResponsePrivate;

class QTAWSCLOUDHSM_EXPORT DescribeHapgResponse : public CloudHsmResponse {
    Q_OBJECT

public:
    DescribeHapgResponse(const DescribeHapgRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeHapgRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeHapgResponse)
    Q_DISABLE_COPY(DescribeHapgResponse)

};

} // namespace CloudHsm
} // namespace QtAws

#endif

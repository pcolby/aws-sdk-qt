// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESOURCELOCATIONRESPONSE_H
#define QTAWS_DESCRIBESOURCELOCATIONRESPONSE_H

#include "mediatailorresponse.h"
#include "describesourcelocationrequest.h"

namespace QtAws {
namespace MediaTailor {

class DescribeSourceLocationResponsePrivate;

class QTAWSMEDIATAILOR_EXPORT DescribeSourceLocationResponse : public MediaTailorResponse {
    Q_OBJECT

public:
    DescribeSourceLocationResponse(const DescribeSourceLocationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeSourceLocationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSourceLocationResponse)
    Q_DISABLE_COPY(DescribeSourceLocationResponse)

};

} // namespace MediaTailor
} // namespace QtAws

#endif

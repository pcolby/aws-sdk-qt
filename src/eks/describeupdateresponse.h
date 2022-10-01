// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEUPDATERESPONSE_H
#define QTAWS_DESCRIBEUPDATERESPONSE_H

#include "eksresponse.h"
#include "describeupdaterequest.h"

namespace QtAws {
namespace Eks {

class DescribeUpdateResponsePrivate;

class QTAWSEKS_EXPORT DescribeUpdateResponse : public EksResponse {
    Q_OBJECT

public:
    DescribeUpdateResponse(const DescribeUpdateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeUpdateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeUpdateResponse)
    Q_DISABLE_COPY(DescribeUpdateResponse)

};

} // namespace Eks
} // namespace QtAws

#endif

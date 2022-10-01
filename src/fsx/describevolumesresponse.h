// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVOLUMESRESPONSE_H
#define QTAWS_DESCRIBEVOLUMESRESPONSE_H

#include "fsxresponse.h"
#include "describevolumesrequest.h"

namespace QtAws {
namespace FSx {

class DescribeVolumesResponsePrivate;

class QTAWSFSX_EXPORT DescribeVolumesResponse : public FSxResponse {
    Q_OBJECT

public:
    DescribeVolumesResponse(const DescribeVolumesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeVolumesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeVolumesResponse)
    Q_DISABLE_COPY(DescribeVolumesResponse)

};

} // namespace FSx
} // namespace QtAws

#endif

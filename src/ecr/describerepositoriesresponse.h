// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREPOSITORIESRESPONSE_H
#define QTAWS_DESCRIBEREPOSITORIESRESPONSE_H

#include "ecrresponse.h"
#include "describerepositoriesrequest.h"

namespace QtAws {
namespace Ecr {

class DescribeRepositoriesResponsePrivate;

class QTAWSECR_EXPORT DescribeRepositoriesResponse : public EcrResponse {
    Q_OBJECT

public:
    DescribeRepositoriesResponse(const DescribeRepositoriesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeRepositoriesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeRepositoriesResponse)
    Q_DISABLE_COPY(DescribeRepositoriesResponse)

};

} // namespace Ecr
} // namespace QtAws

#endif

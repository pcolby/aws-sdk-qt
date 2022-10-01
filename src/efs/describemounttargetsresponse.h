// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMOUNTTARGETSRESPONSE_H
#define QTAWS_DESCRIBEMOUNTTARGETSRESPONSE_H

#include "efsresponse.h"
#include "describemounttargetsrequest.h"

namespace QtAws {
namespace Efs {

class DescribeMountTargetsResponsePrivate;

class QTAWSEFS_EXPORT DescribeMountTargetsResponse : public EfsResponse {
    Q_OBJECT

public:
    DescribeMountTargetsResponse(const DescribeMountTargetsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeMountTargetsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeMountTargetsResponse)
    Q_DISABLE_COPY(DescribeMountTargetsResponse)

};

} // namespace Efs
} // namespace QtAws

#endif
